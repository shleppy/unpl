/* author: Shelby Hendrickx */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "weeks.h"

void readWeekItems()
{
    char line[32];
    char current_line[NUMBER_OF_DAYS];
    for (int i = 0; i < NUMBER_OF_DAYS; ++i)
    {
        fgets(line, sizeof line, stdin);
        sscanf(line, "%s", &current_line);
        
        items[i] = getDay(current_line);
            
    }
}

int getDay(char* line)
{
    char* week_values[] = { "mon", "tue", "wed", "thu", "fri", "sat", "sun"};
    for (int i = 0, day = Mon; i < NUMBER_OF_DAYS; ++i, ++day)
    {
        if (strcmp(line, week_values[i]) == 0)
            return day;
    }
    return -1;
}

void printWeekItems()
{
    printf("\nItems in the week:\n");
    for (int i = 0; i < NUMBER_OF_DAYS; ++i)
        printf(" %s\n", getStringRepr(items[i]));
}

const char* getStringRepr(Week day)
{
    char* week_strings[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    
    return week_strings[day];
}

