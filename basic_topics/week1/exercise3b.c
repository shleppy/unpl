/* Exercise 3 part two */
#include <stdio.h>

void convertPosition(char* row, int* col);

int main(void)
{
    char x;
    int y;
    
    printf("Enter row: ");
    scanf("%c", &x);
    printf("Enter col: ");
    scanf("%d", &y);

    printf("Original row = %c, col = %d\n", x, y);
    convertPosition(&x, &y);
    printf("Converted row = %d, col = %d\n", x, y);

    // tests
    x = 'B';
    y = 4;

    printf("Original row = %c, col = %d\n", x, y);
    convertPosition(&x, &y);
    printf("Converted row = %d, col = %d\n", x, y);

}

void convertPosition(char* row, int* col)
{
    char ROW_CHARS[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 0; i < 8; ++i)
        if (*row == ROW_CHARS[i])
            *row = (char) i;

    *col = *col - 1;
}

