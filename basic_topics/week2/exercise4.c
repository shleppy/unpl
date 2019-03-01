/* Exercise 4 */
#include <stdio.h>
#include <limits.h>

unsigned long int datumcode(int jaar, int maand, int dag);
void printDecimalToBinInReverse(unsigned long int n);

int main(void)
{
    /*
    Old Testing Solution

    unsigned long int maxULI = ULONG_MAX;
    printf("Max unsigned long int: %llu\n", maxULI);

    unsigned long int* maxAddr = &maxULI;
    printf("Starting Address of maxULI: %x\n", maxAddr);

    int size = sizeof(maxULI);
    printf("Size of max unsigned long int: %d\n", size);
    
    unsigned long int* posOfLast3Bytes = maxAddr + 5;
    printf("Starting address of maxULI + 5 bytes and 3 bits = %x\n", posOfLast3Bytes); 
    End Old Testing Solution
    */

    unsigned long int result = datumcode(4030, 11, 30);
    printf("Original Date in dec format:\n%d\n%d\n%d\n", 30, 11, 4030);

    printf("\nOriginal Date in bit format (from right to left):\n");

    printDecimalToBinInReverse(30);
    printDecimalToBinInReverse(11);
    printDecimalToBinInReverse(4030);

    printf("\nInt result:\n%llu\n", result);
    printf("\nBin result (from right to left):\n");
    printDecimalToBinInReverse(result);
    
}

/* returns an unsigned long int with the last 21 digits represented as a date */
unsigned long int datumcode(int jaar, int maand, int dag) 
{
    unsigned long int result = dag + (maand << 5) + (jaar << 9);
    return result;
}

/* prints the passed int as a binary in reverse order */
void printDecimalToBinInReverse(unsigned long int n) {
    while (n) {
        if (n & 1)
            printf("1");
        else
            printf("0");
        n >>= 1;
    }
    printf("\n");
}

