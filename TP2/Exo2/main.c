#include <stdio.h>
#include "a.h"
#include "b.h"
#include "aa.h"
#include "bb.h"

int main() {
    printf("La valeur de AA est : %d\n", AA);
    printf("La valeur de BB est : %d\n", BB);
    int result = addone(BB);
    printf("addone(BB) = %d\n", result);

    return 0;
}
