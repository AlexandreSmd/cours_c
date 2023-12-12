#include <stdio.h>

int compterE(const char* str) {
    int compteur = 0; // Initialise un compteur à zéro
    while (*str != '\0') {
        if (*str == 'e' || *str == 'E') { // Vérifie si le caractère est 'e' ou 'E'
            compteur++; 
        }
        str++; 
    }

    return compteur; 
}

int main() {
    const char* chaine = "Ceci est un exemple de chaîne contenant des 'e' et des 'E'.";

    int nombreDeE = compterE(chaine);
    printf("Le nombre de 'e' dans la chaîne est : %d\n", nombreDeE);

    return 0;
}
