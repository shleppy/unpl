/* author: Shelby Hendrickx */
#include <stdlib.h>

#ifndef ARRAY_DATA_STORE_H
#define ARRAY_DATA_STORE_H

typedef int bool;           /* for clarity */

typedef char** str_arr;     /* simple multidimensional arr */

typedef struct ads {
    size_t size;            /* number of elements */
    str_arr data;           /* contained data */
} array_data_store;

void init(int n);
/* pre : n > 0
 * post: an in-memory data storage for n strings created.
 */

void destroy();
/* pre : true
 * post: allocated memory de-allocated
 */

bool insert(char * str);
/* pre : str != null and contains a string STR (\0 as sentinel), not
 *       necessarily dynamically allocated, storage exists.
 * post: string STR store in available free storage slot and 1
 *       returned, or 0 returned if there are no free storage slots.
 */

void delete(char * str);
/* pre : str != null and contains a string STR (\0 as sentinel), not
 *       necessarily dynamically allocated, storage exists. 
 * post: each stored string which matches STR removed, and storage
 *       slot set free
 */

void print();
/* pre : storage exists
 * post: stored strings printed, one string per line
 */

#endif
