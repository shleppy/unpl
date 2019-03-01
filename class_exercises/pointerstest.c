/* Just for practicing pointers */
#include <stdio.h>

int main(void)
{
    int var = 25;           /* actual variable */
    int* integerPointer;    /* declare pointer */

    integerPointer = &var; /* Store address of variable in pointer variable */
    
    printf("Address of variable var = %x\n", &var);
    printf("Address stored in pointer variable = %x\n", integerPointer);
    
    printf("Value of address of pointer variable = %d\n", *integerPointer);

    return 0;
}