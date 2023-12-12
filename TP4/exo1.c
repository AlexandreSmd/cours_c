#include <stdio.h>
#include <stdlib.h>
#include "exo1.h"

//Tas
Date* create_date(int day, int month, int year) {
    Date* date = (Date*) malloc(sizeof(Date));
    (*date).day = day;
    (*date).month= month;
    (*date).year = year;
    return date;
}

//Pile
Date create_date2(int day, int month, int year) {
    Date date;
    date.day = day;
    date.month= month;
    date.year = year;
    return date;
}


void print_date(Date *date){
    printf("%d / %d /%d\n", (*date).day, (*date).month, (*date).year);
}

/*
int main() {
    //Tas
    Date* date = (Date*) malloc(sizeof(Date));
    *date = create_date2(01,02,1368);
    print_date(date);

    //Tas
    Date *date1 = create_date(01,02,2023);
    print_date(date1);

    //Pile
    Date date2 = create_date2(01,02,2013);
    print_date(&date2);
}
*/