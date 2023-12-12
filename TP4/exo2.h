#ifndef exo2_h
#define exo2_h

typedef struct Person{
    char* prenom;
    char* nom;
    char* date_de_naissance;
} Person;


Person* create_person(char* prenom, char* nom, char* date_de_naissance);
void print_person(Person* person);


#endif