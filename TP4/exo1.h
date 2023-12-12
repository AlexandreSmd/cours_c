#ifndef exo1_h
#define exo1_h

typedef struct Date{
    int day;
    int month;
    int year;
} Date;

Date* create_date(int day, int month, int year);
void print_date(Date *date);

#endif