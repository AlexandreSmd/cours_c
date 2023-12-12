#include <iostream>

int main() {
    int a = 5;
    int &b = a; // b est une référence à la variable a

    std::cout << "a: " << a << std::endl; // Affiche la valeur de a
    std::cout << "b: " << b << std::endl; // Affiche la valeur de b

    b = 10; // Modifie la valeur de a à travers la référence b

    std::cout << "a après modification: " << a << std::endl; // Affiche la nouvelle valeur de a

    return 0;
}
