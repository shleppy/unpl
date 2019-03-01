/* author: Shelby Hendrickx */

#include <stdio.h>
#include <stdlib.h>

void printEnvVariable(char*);

int main (int argc, char* argv[])
{
    printf("Test home = "); 
    printEnvVariable("HOME");
    printf("Test path = ");
    printEnvVariable("SHELL");

    printEnvVariable(argv[1]);

    return 0;
}

void printEnvVariable(char* env) 
{
    printf("%s\n", getenv(env));
}

