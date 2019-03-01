/* author: Shelby Hendrickx */

#include "arraydatastore.h"
#include <stdio.h>
#include <string.h>

array_data_store global_arr;

void init(int n)
{
    /* malloc enough space for n char pointers.
     * memset to ensure all bytes are set to zero.
     */
    global_arr = (array_data_store) {
        .data = calloc(n, n * sizeof(char*)),
        .size = n
    };

    if (!global_arr.data) 
    {
        printf("Memory allocation failed.");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("\nGlobal array initialized\n");
    }
}

void destroy()
{
    free(global_arr.data);
}

bool insert(char * str)
{
    printf("\nINSERT\n");
    str_arr pdata = global_arr.data;
    str_arr end = global_arr.data + global_arr.size;

    while (pdata < end)
    {
        if (!*pdata)
        {
            printf("Free slot found for %s\n", str);
            *pdata = str;
            return 1;
        }
        pdata++;
    }

    printf("No available slots in memory.\n");
    return 0;
}

void delete(char * str) 
{
    printf("\nDELETE\n");
    for (int i = 0; i < global_arr.size; ++i)
    {
        const char* iter = global_arr.data[i];
        if (!iter) continue;
       
        printf("comparing %s with %s", iter, str);
        
        if (strcmp(iter, str) == 0) 
        {
            printf("\t<< Equal\n");
            global_arr.data[i] = '\0';
        } 
        else 
        {
            printf("\n");
        }   
    }
}

void print()
{
    printf("\nPRINT\n");
    for (int i = 0; i < global_arr.size; ++i)
    {
        if ( global_arr.data[i] ) 
        {
            char* str = global_arr.data[i];
            printf("String [%d] = %s\n", i, str);
        } 
        else 
        {
            printf("String [%d] is empty\n", i);    
        }
    }   
}   

