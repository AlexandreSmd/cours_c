#include <stdio.h>
#include <stdlib.h>
#include "exo1.h"


typedef struct DateNode {
    Date* date;
    struct DateNode* next;
} DateNode;

typedef struct DateList {
    DateNode* head;
} DateList;

DateList* insert(Date* date, DateList* list) {
    // Créez un nouveau nœud DateNode pour la date donnée
    DateNode* newNode = (DateNode*)malloc(sizeof(DateNode));
    (*newNode).date = date;
    
    // Pointez le prochain nœud du nouveau nœud vers la tête actuelle de la liste
    (*newNode).next = (*list).head;
    
    // Mettez à jour la tête de la liste pour pointer vers le nouveau nœud
    (*list).head = newNode;
    
    return list;
}

void print_list(DateList* list) {
    DateNode* current = list->head;
    while (current != NULL) {
        print_date(current->date);
        current = current->next;
    }
}

DateList* insert_back(Date* date, DateList* list) {
    // Créez un nouveau nœud DateNode pour la date donnée
    DateNode* newNode = (DateNode*)malloc(sizeof(DateNode));
    newNode->date = date;
    newNode->next = NULL;  // Le nouveau nœud est le dernier de la liste, donc son pointeur next est NULL

    // Si la liste est vide, le nouveau nœud devient la tête de la liste
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        // Sinon, trouvez le dernier nœud de la liste
        DateNode* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Ajoutez le nouveau nœud à la fin
        current->next = newNode;
    }

    return list;
}

DateList* removee(Date* date, DateList* list) {
    DateNode* current = list->head;
    DateNode* prev = NULL;

    // Parcourez la liste jusqu'à trouver la date à supprimer ou atteindre la fin
    while (current != NULL) {
        if (current->date->day == date->day &&
            current->date->month == date->month &&
            current->date->year == date->year) {
            // La date correspondante a été trouvée, supprimez le nœud
            if (prev == NULL) {
                // Si la date à supprimer est la tête de la liste
                list->head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return list;
        }
        prev = current;
        current = current->next;
    }

    return list;
}



int main() {
    DateList myList;
    myList.head = NULL;

    // Créez quelques dates
    Date* date1 = create_date(1, 2, 2023);
    Date* date2 = create_date(5, 6, 2023);
    Date* date3 = create_date(9, 10, 2023);

    // Insérez les dates en tête de liste
    insert(date1, &myList);
    insert(date2, &myList);
    insert(date3, &myList);

    // Affichez la liste des dates en utilisant la fonction print_list
    printf("Liste après insertion en tête :\n");
    print_list(&myList);

    // Créez quelques autres dates pour les tests
    Date* date4 = create_date(12, 12, 2023);
    Date* date5 = create_date(3, 3, 2023);

    // Insérez les dates en queue de liste
    insert_back(date4, &myList);
    insert_back(date5, &myList);

    // Affichez la liste mise à jour
    printf("Liste après insertion en queue :\n");
    print_list(&myList);

    // Supprimez une date de la liste
    Date date_to_remove;
    date_to_remove.day = 5;
    date_to_remove.month = 6;
    date_to_remove.year = 2023;
    removee(&date_to_remove, &myList);

    // Affichez la liste mise à jour
    printf("Liste après suppression :\n");
    print_list(&myList);

    // N'oubliez pas de libérer la mémoire lorsque vous avez terminé avec les dates et la liste
    free(date1);
    free(date2);
    free(date3);
    free(date4);
    free(date5);

    // Libérez la mémoire allouée pour les nœuds de la liste
    DateNode* current = myList.head;
    while (current != NULL) {
        DateNode* nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}
