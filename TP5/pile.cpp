#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream> 

// Définition de la classe Pile
class Pile {
public:
    // Constructeur : initialise la capacité, le sommet (top_) et alloue la mémoire pour le tableau (data_)
    Pile(int capacity) : capacity_(capacity), top_(-1), data_(new int[capacity]) {}

    // Destructeur : libère la mémoire allouée pour le tableau lorsque l'objet Pile est détruit
    ~Pile() {
        delete[] data_;
    }

    // Méthode pour ajouter un élément à la pile
    void push(int value) {
        // Vérifie si la pile n'est pas pleine avant d'ajouter l'élément
        if (top_ < capacity_ - 1) {
            data_[++top_] = value;
        } else {
            // Lance une exception en cas de pile pleine
            throw std::overflow_error("Pile pleine");
        }
    }

    // Méthode pour retirer l'élément en haut de la pile
    void pop() {
        // Vérifie si la pile n'est pas vide avant de retirer l'élément
        if (!isEmpty()) {
            --top_;
        } else {
            // Lance une exception en cas de pile vide
            throw std::underflow_error("Pile vide");
        }
    }

    // Méthode pour obtenir la valeur de l'élément en haut de la pile
    int top() {
        // Vérifie si la pile n'est pas vide avant de renvoyer la valeur en haut
        if (!isEmpty()) {
            return data_[top_];
        } else {
            // Lance une exception en cas de pile vide
            throw std::underflow_error("Pile vide");
        }
    }

    // Méthode pour vérifier si la pile est vide
    bool isEmpty() const {
        return top_ == -1;
    }

private:
    int capacity_; // Capacité maximale de la pile
    int top_; // Indice du sommet de la pile
    int* data_; // Tableau pour stocker les éléments de la pile
};