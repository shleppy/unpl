/* author: Shelby Hendrickx */

#include "arraydatastore.h"
#include <stdio.h>
#include <stdlib.h>

char* data;     /* global data */
int N;

void init(int n)
{
    data = malloc(n * sizeof *data);
    N = n;
}

void destroy()
{
    free(data);
}

bool insert(char * str)
{
    char* pdata = data;
    char* end = data + N;

    while (pdata < end)
    { 
        if (*pdata == 0) 
        {
            pdata = str;
            return 1;
        }   
        pdata++;
    }  
    return 0;
}

void delete(char * str) 
{
    char* pdata = data;
    char* end = data + N;
    while (pdata < end)
    {

        if (*pdata == *str)
            *pdata = 0;
        pdata++;
    }
}

void print()
{
    char* pdata = data;
    int i = 0;

    while ( i < N )
    {              
        printf("%s\n", pdata);
        pdata++;
        i++;
    }   
}

