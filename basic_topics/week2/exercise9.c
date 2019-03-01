/* author: Shelby Hendrickx */

#include <stdio.h>
#include <stdlib.h>

int smallestButOne();

int main (int argc, char* argv[])
{
    printf("Second smallest: %d\n", smallestButOne());

    return 0;
}

int smallestButOne() 
{ 
    int min, minButOne, input;
    char line[32];               /* buffer size */

    do
    {
        if (fgets(line, sizeof line, stdin) == NULL) 
        {
            fprintf(stderr, "Error in fgets()\n");
            exit(EXIT_FAILURE);
        }
        
        if (sscanf(line, "%d", &input) != 1)
            break;
        
        if (input < min) {
            minButOne = min;
            min = input;
        } else if (input < minButOne)
            minButOne = input;

    } while(1);
    return minButOne;
}

