#include <stdio.h>
int main (int argc, char* argv[]) 
{
    printf("Hello world\n");
    int i = 0;
      while (i < argc)
    {
        printf("argument %d = %s\n", i, argv[i]);
        ++i;
    }
    printf("total args %d\n", argc); 
    return 0;
}
