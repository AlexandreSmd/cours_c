#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "exo1.h"

bool compare_date(Date* date1, Date* date2) {
    if ((*date1).day == (*date2).day) {
        if ((*date1).month == (*date2).month) {
            if ((*date1).year == (*date2).year){
                return true;
            }
        }
    }
    return false;
}


int main() {

    Date* date1 = create_date(1,1,1);
    Date* date2 = create_date(1,1,1);
    Date* date3 = create_date(2,1,1);

    printf("%d \n", (int) compare_date(date1, date2));
    printf("%d \n", (int) compare_date(date3, date2));
    printf("%d \n", (int) compare_date(date1, date3));
}