#include <stdio.h>

int mylen(char s[]) {
    int length = 0;

    // Parcourir la chaîne jusqu'à atteindre le caractère nul '\0'
    while (s[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char chaine[] = "Bonjour, monde!";
    int longueur = mylen(chaine);

    printf("La longueur de la chaîne est : %d\n", longueur);

    return 0;
}
