#include <stdio.h>
#include "a.h"
#include "b.h"

int main() {
#ifdef A
    printf("La valeur de A est : %d\n", A);
#endif

#ifdef B
    printf("La valeur de B est : %d\n", B);
#endif

    return 0;
}
