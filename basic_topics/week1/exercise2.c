/* Exercise 2 */
#include <stdio.h>

void sum(int arr[], int size, int* sum);

int main(void)
{
    int ARR_SIZE = 10;
    int arr[] = { 2, 3, 12, 4, 15, 52, 5, 23, 9, 3 };
    int result = 0;
    
    sum(arr, ARR_SIZE, &result);

    printf("The sum of the array is %d\n", result);
    return 0;
}

/* linear solution */
void sum(int arr[], int size, int* sum)
{
    *sum = 0; /* reset sum */
    for (int i = 0; i < size; ++i) 
        *sum += arr[i];
}

