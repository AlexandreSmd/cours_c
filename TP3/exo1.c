#include <stdio.h>

int strlen_custom(const char* str) {
    const char* p = str; // Initialisez un pointeur p au début de la chaîne

    while (*p != '\0') {
        p++; // Avancez le pointeur p d'un caractère
    }

    return p - str; // Soustrayez les pointeurs pour obtenir la longueur de la chaîne
}

int main() {
    const char* myString = "Bonjour";
    int length = strlen_custom(myString);
    printf("La longueur de la chaîne est : %d\n", length);

    return 0;
}