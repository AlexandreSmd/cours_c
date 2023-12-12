#include <stdio.h>
#include <stdlib.h>

// Fonction pour copier une chaîne de caractères tout en modifiant le premier caractère
char* copierEtModifier(const char* source) {
    if (source == NULL || *source == '\0') {
        return NULL; // Gestion d'un cas invalide
    }

    // Calculer la longueur de la chaîne source
    int longueur = 0;
    const char* p = source;
    while (*p != '\0') {
        longueur++;
        p++;
    }

    // Allouer de la mémoire pour la nouvelle chaîne (en ajoutant 1 pour le caractère nul)
    char* nouvelleChaine = (char*)malloc((longueur + 1) * sizeof(char));

    if (nouvelleChaine == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }

    // Copier la chaîne source dans la nouvelle chaîne tout en modifiant le premier caractère
    char* destination = nouvelleChaine;
    const char* sourcePtr = source;
    
    // Modifier le premier caractère (par exemple, en le transformant en majuscule)
    *destination = (*sourcePtr == 'e') ? 'E' : *sourcePtr;

    // Copier le reste de la chaîne
    sourcePtr++;
    destination++;

    while (*sourcePtr != '\0') {
        *destination = *sourcePtr;
        sourcePtr++;
        destination++;
    }

    // Terminer la nouvelle chaîne avec un caractère nul
    *destination = '\0';

    return nouvelleChaine;
}

int main() {
    const char* chaine = "exemple";

    char* copieModifiee = copierEtModifier(chaine);

    if (copieModifiee != NULL) {
        printf("Chaîne copiée et modifiée : %s\n", copieModifiee);
        free(copieModifiee); // N'oubliez pas de libérer la mémoire
    } else {
        printf("Échec de l'allocation de mémoire\n");
    }

    return 0;
}
