#include <stdio.h>

//Exo8 

void additionnerTableaux(int tableau1[],int tableau2[], int resultat[], int taille) {
    for (int i = 0; i < taille; i++) {
        resultat[i] = tableau1[i] + tableau2[i];
    }
}

void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
}

int main() {
    int tableau1[] = {1, 2, 3, 4, 5};
    int tableau2[] = {6, 7, 8, 9, 10};
    int taille = 5;
    int resultat[5];

    additionnerTableaux(tableau1, tableau2, resultat, taille);
    afficherTableau(resultat, taille);
    return 0;
}

