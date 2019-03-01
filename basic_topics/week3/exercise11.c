/* author: Shelby Hendrickx */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char *getenv(const char *name);
int setenv(const char *name, const char *value, int overwrite);

int main(int argc, char *argv[], char *envp[]) {
    char *home, *path;
    
    // last element of envp array is a nullptr
    // hence iterating is as follows:
    printf("\nall environment variables\n");
    printf("=========================\n");
    
    int i = 0;
    while (envp[i]!=NULL) {
        printf("envp[%d]=%s\n",i,envp[i]);
        i++;
    }
    printf("\nsome examples of standard environment variables\n");
    
    //"HOME" and "PATH" are a standard environment variable, see for more:
    //https://www.gnu.org/software/libc/manual/html_node/Environment-Variables.html
    home = getenv("HOME");
    printf("home dir is: %s\n", home);
    printf("PATH=%s\n",getenv("PATH"));
    return 0;
}

char *getenv(const char *name)
{
    
}

int setenv(const char *name, const char *value, int overwrite) 
{

}
