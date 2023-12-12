#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>

//Méthode pour print un conteneur
template <typename T>
void displayContainer(const T& container) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

//Méthode pour compter le nombre d'une valeur dans notre conteneur
template <typename T>
int countOccurrences(const T& container, const typename T::value_type& n) {
    return std::count(container.begin(), container.end(), n);
}

//Méthode pour compter le nombre impaire de valeur dans notre container
template <typename T>
int countOddElements(const T& container) {
    return std::count_if(container.begin(), container.end(), [](const auto& element) {
        return element % 2 != 0;
    });
}

//Cherche la première apparaition d'une certaine valeur et renvoie la position
template <typename T>
typename T::iterator findElement(T& container, const typename T::value_type& value) {
    return std::find(container.begin(), container.end(), value);
}

//Partitionne le container (paire à gauche, impair à droite)
template <typename T>
void partitionArray(T& container) {
    std::partition(container.begin(), container.end(), [](const auto& element) {
        return element % 2 == 0;
    });
}

//Trier le container par ordre décroitssant
template <typename T>
void sortDescending(T& container) {
    std::sort(container.begin(), container.end(), std::greater<typename T::value_type>());
}

int main() {
    std::vector<int> vectorExample = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    
    std::cout << "Vector elements: ";
    displayContainer(vectorExample);

    int numberToCount = 5;
    std::cout << "Number of occurrences of " << numberToCount << ": " << countOccurrences(vectorExample, numberToCount) << std::endl;

    std::cout << "Number of odd elements: " << countOddElements(vectorExample) << std::endl;

    int numberToFind = 4;
    auto foundElement = findElement(vectorExample, numberToFind);
    if (foundElement != vectorExample.end()) {
        std::cout << "Found " << numberToFind << " at position " << std::distance(vectorExample.begin(), foundElement) << std::endl;
    } else {
        std::cout << numberToFind << " not found in the vector." << std::endl;
    }

    partitionArray(vectorExample);
    std::cout << "After partitioning: ";
    displayContainer(vectorExample);

    sortDescending(vectorExample);
    std::cout << "After sorting in descending order: ";
    displayContainer(vectorExample);

    // Examples with std::list
    std::list<int> listExample = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    
    std::cout << "\nList elements: ";
    displayContainer(listExample);

    // Similar operations can be performed on std::list

    // Examples with std::map
    std::map<int, std::string> mapExample = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    
    std::cout << "\nMap elements: ";
    for (const auto& pair : mapExample) {
        std::cout << "(" << pair.first << ": " << pair.second << ") ";
    }
    std::cout << std::endl;

    // Similar operations can be performed on std::map

    return 0;
}
