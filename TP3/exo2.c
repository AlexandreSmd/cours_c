#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour allouer dynamiquement une zone de mémoire et copier une chaîne
char* copierChaine(const char* source) {
    // Allouer de la mémoire pour la nouvelle chaîne
    char* nouvelleChaine = (char*)malloc(strlen(source) + 1);

    // Vérifier si l'allocation a réussi
    if (nouvelleChaine == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1); // Quitter le programme en cas d'échec de l'allocation
    }

    // Copier la chaîne source dans la nouvelle chaîne
    strcpy(nouvelleChaine, source);

    return nouvelleChaine;
}

// Fonction pour concaténer deux chaînes et stocker le résultat dans une nouvelle zone de mémoire
char* concatenationChaine(const char* chaine1, const char* chaine2) {
    // Allouer de la mémoire pour la nouvelle chaîne
    char* nouvelleChaine = (char*)malloc(strlen(chaine1) + strlen(chaine2) + 1);

    // Vérifier si l'allocation a réussi
    if (nouvelleChaine == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1); // Quitter le programme en cas d'échec de l'allocation
    }

    // Copier la première chaîne dans la nouvelle chaîne
    strcpy(nouvelleChaine, chaine1);

    // Concaténer la deuxième chaîne à la fin de la nouvelle chaîne
    strcat(nouvelleChaine, chaine2);

    return nouvelleChaine;
}

int main() {
    const char* chaine1 = "Hello, ";
    const char* chaine2 = "world!";

    // Copier la première chaîne dans une nouvelle zone de mémoire
    char* copie = copierChaine(chaine1);
    printf("Copie : %s\n", copie);

    // Concaténer les deux chaînes dans une nouvelle zone de mémoire
    char* resultat = concatenationChaine(chaine1, chaine2);
    printf("Concaténation : %s\n", resultat);

    // Libérer la mémoire allouée
    free(copie);
    free(resultat);

    return 0;
}
