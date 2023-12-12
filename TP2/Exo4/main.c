#include <stdio.h>
#include <string.h>

void concatenerChaine(const char chaine1[], const char chaine2[], char resultat[]) {
    strcpy(resultat, chaine1);  // Copie la première chaîne dans le résultat
    strcat(resultat, chaine2);  // Concatène la deuxième chaîne à la fin du résultat
}

int main() {
    char chaine1[] = "Bonjour, ";
    char chaine2[] = "monde!";
    char resultat[100];  // Le tableau où nous stockerons le résultat

    concatenerChaine(chaine1, chaine2, resultat);

    printf("Résultat : %s\n", resultat);

    return 0;
}
