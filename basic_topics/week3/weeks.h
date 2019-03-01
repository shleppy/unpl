/* author: Shelby Hendrickx */

#define NUMBER_OF_DAYS 7

enum week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
typedef enum week Week;

Week items[NUMBER_OF_DAYS];

/* Reads week items from stdin.
 *
 * Post: Appends the day to items[].
 */
void readWeekItems();

/* Prints week itmes to stdout. */
void printWeekItems();

/* Returns dat of the week as defined in enum week */
int getDay(char*);

/* Convert enum week value to a full week day string representation. */
const char* getStringRepr(Week day);

