#include <stdio.h>
#include "a.h"
#include "b.h"
#include "aa.h"
#include "bb.h"

#define carre(x) ((x) * (x))

int main() {
    printf("La valeur de AA est : %d\n", AA);
    printf("La valeur de BB est : %d\n", BB);
    printf("Le carré de BB est : %d\n", carre(BB));

    return 0;
}
