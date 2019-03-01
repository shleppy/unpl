/* author: Shelby Hendrickx */

#include <stdio.h>
#include <assert.h>
#include "arraydatastore.h"

int main (int argc, char* argv[])
{
    /* Start with size of 5 */
    init(5);

    /* insert 3 strings */
    char *a = "unpl", *b = "ppar", *c = "apps";

    insert(a);
    insert(b);
    insert(c);

    /* print all values */
    print();

    /* delete 1 string */
    char *copy_b = "ppar";
    delete(copy_b);

    /* print all remaining values should be a and b */
    print();
   
    insert(a);
    insert(a);

    print();

    insert(c);
    char *copy_a = "unpl";
    delete(copy_a);
    
    print();

    /* deallocate memory */
    destroy();

    return 0;
}

