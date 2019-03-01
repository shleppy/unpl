/* author: Shelby Hendrickx */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define N 7

enum week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
typedef enum week Week;

Week items[N];

void readWeekItems();
void printWeekItems();
const char* getDay(Week);

int main (int argc, char* argv[])
{
    readWeekItems();
    printWeekItems();
    return 0;
}

void readWeekItems() 
{
    char line[32];   
    char cur_in[N]; 
    
    for (int i = 0; i < N; ++i) 
    {
        fgets(line, sizeof line, stdin);
        sscanf(line, "%s%s%s", &cur_in);
            
        if (strcmp(cur_in, "mon") == 0)      items[i] = Mon;
        else if (strcmp(cur_in, "tue") == 0) items[i] = Tue;
        else if (strcmp(cur_in, "wed") == 0) items[i] = Wed;
        else if (strcmp(cur_in, "thu") == 0) items[i] = Thu;
        else if (strcmp(cur_in, "fri") == 0) items[i] = Fri;
        else if (strcmp(cur_in, "sat") == 0) items[i] = Sat;
        else if (strcmp(cur_in, "sun") == 0) items[i] = Sun;
        else {
            printf("Not found in enum.\n"); 
            i--;
        }
    }
}

void printWeekItems() 
{
    printf("\nItems in the week:\n");
    for (int i = 0; i < N; ++i)
        printf("%s\n", getDay(items[i]));
}

const char* getDay(Week day) 
{
    switch(day)
    {
        case Mon: return "Monday";
        case Tue: return "Tuesday";
        case Wed: return "Wednesday";
        case Thu: return "Thursday";
        case Fri: return "Friday";
        case Sat: return "Saturday";
        case Sun: return "Sunday";
    }
}

