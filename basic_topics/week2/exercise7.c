/* author: Shelby Hendrickx */

#include <stdio.h>
#include <stdlib.h>

void rectangle(int, int);

int main (int argc, char* argv[])
{    
    if (*argv[1] == '\0' || *argv[2] == '\0') {
        printf("Please enter width and height as args.\n");
        return 1;
    }

    int h = atoi(argv[1]);
    int w = atoi(argv[2]);
    rectangle(h, w);
    return 0;
}

void rectangle(int h, int w)
{
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j)
            printf("*");
        printf("\n");
    }
}

