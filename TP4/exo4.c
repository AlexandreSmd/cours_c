#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "exo1.h"


Date* duplicate(Date* datetoduplicate) {
    Date* d = (Date*) malloc(sizeof(Date));

    (*d).day = (*datetoduplicate).day;
    (*d).month = (*datetoduplicate).month;
    (*d).year = (*datetoduplicate).year;

    return d;
}

int main() {
    Date* date = create_date(01,02,1368);
    Date* d = duplicate(date);
}