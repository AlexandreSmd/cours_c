#include <stdio.h>
#include <stdlib.h>
#include "exo2.h"


Person* create_person(char* prenom, char* nom, char* date_de_naissance) {
    Person* p = (Person*) malloc(sizeof(Person));
    (*p).prenom = prenom;
    (*p).nom = nom;
    (*p).date_de_naissance = date_de_naissance;
    return p;
}

void print_person(Person* person) {
    printf("%s, %s, %s \n", (*person).prenom, (*person).nom, (*person).date_de_naissance);
}


/*
int main() {
    Person* p = create_person("Alexandre", "Simaillaud", "06/12/2000");
    print_person(p);
}

*/

