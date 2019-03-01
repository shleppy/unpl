#include <stdio.h>

int strcmp(const char*, const char*);

int main(int argc, char* argv[]) 
{
    if (argc != 3) 
        printf("Please pass exactly 2 arguments.");
    
    int result = strcmp(argv[1], argv[2]);
    
    if (result == 0)
        printf("The strings  are equal.\n"); 
    if (result == -1)
        printf("Arg 1 is smaller than Arg 2\n");
    
    if (result == 1)
        printf("Arg 1 is bigger than Arg 2\n");
    
    if (result > 1 || result < -1)
        printf("Difference = %d\n", result);
}

int strcmp(const char* str1, const char* str2) 
{
    for (; *str1 == *str2; str1++, str2++)    
        if (*str1 == '\0') return 0;

    if (*str1 == '\0') return -1;
    if (*str2 == '\0') return 1;

    return *str1 - *str2;
}

