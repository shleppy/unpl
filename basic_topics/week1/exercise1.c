/* Exercise 1 */
#include <stdio.h>

void printResult(int occurenceResult, int number);
int occurence1(int arr[], int num, int size);
int occurence2(int* arr, int num);
int occurence3(int[], int num);
int occurence4(int[], int num);

static int solutionNr = 0;

int main(void)
{
    int arr[] = {1, 4, 9, 9, 9, 2, 4, 10, -1};
    int size = 8;
    int number = 9;

    // Initial results
    printResult(occurence1(arr, number, size), number);
    printResult(occurence2(arr, number), number);
    printResult(occurence3(arr, number), number);

    printf("\nSolution 4 is only for testing.\n");
    printResult(occurence4(arr, number), number);
    
    // Test Cases
    return 0;
}

/* Solution 1 passes a size as extra parameter */
int occurence1(int arr[], int num, int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; ++i) {
        if (num == arr[i]) count++;
    }
    return count;
}

/* Solution 2 loops using pointer and -1 as end of array */
int occurence2(int* arr, int num)
{
    int count = 0;
    while (*arr != -1) 
    {
        if (num == *arr) count++;
        arr++;
    }
    return count;
}

/* Solution 3 loops using an array and -1 as end of array */
int occurence3(int arr[], int num) 
{
    int count = 0;
    for (int i = 0; arr[i] != -1; ++i) 
    {
        if (num == arr[i]) count++;
    }
    return count;
}

/* Solution 4 is only for testing atm */
/* Solution 4 uses the size of the array and the size of an int to compute the length */
int occurence4(int arr[], int num) 
{   
    int count = 0;
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]); ++i) 
    {
        if (num == arr[i]) count++;
    }
}

void printResult(int occurenceResult, int number) {
    printf("Solution %d: \n", ++solutionNr);
    printf("The number %d occures %d times\n", number, occurenceResult );
}

