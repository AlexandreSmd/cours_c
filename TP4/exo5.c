#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "exo2.h"


Person* duplicatetoperson(Person* p) {
    Person* Personne = (Person*) malloc(sizeof(Person));
    (*Personne).prenom = (*p).prenom;
    (*Personne).nom = (*p).nom;
    (*Personne).date_de_naissance = (*p).date_de_naissance;
    return Personne;
}

int main() {
    Person* p = create_person("Alexandre", "Simaillaud", "06/12/2000");
    Person* pp= duplicatetoperson(p);
}