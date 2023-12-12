
//Test

/*
int main() {
    printf("Hello\n");
}
*/

//Exo1
/*
int main() {
    int a = 5;
    printf("Hello World!\na = %d\n", a);
    return 0;
}
*/

//Exo2
/*
int main() {

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}


*/

/*
//Exo3
int addone(int x) {
    return x + 1;
}

//test
int main() {
    int num = 5;
    printf("%d",addone(num));
}
*/
//Exo4
/*
int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }

    int prev = 0;
    int current = 1;
    int next;

    for (int i = 2; i <= n; i++) {
        next = prev + current;
        prev = current;
        current = next;
    }

    return current;
}

int main() {
    int result = fibonacciIterative(4);
    printf("Le %d-iÃ¨me nombre de Fibonacci est : %d\n", 4, result);
    return 0;
}
*/

//Exo4 Fibo recursive
/*
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main() {
    int result = fibonacciRecursive(10);
    printf("Le %d-iÃ¨me nombre de Fibonacci est : %d\n", 4, result);
    return 0;
}
*/

//Exo5
/*
void print_tableau(int tableau[], int longueur) {
    printf("Ã‰lÃ©ments du tableau : ");
    for (int i = 0; i < longueur; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int tableau[50]; 
    int index = 0;  

    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            tableau[index] = i;
            index++;
        }
    }

    print_tableau(tableau, index);
    return 0;
}
*/

//Exo6
/*
int fiboTableau() {
    int tableau[20] = {0,1};
    for (int i=2;i<=20; i++) {
        tableau[i] = tableau[i-1] + tableau[i-2];
    }
    return tableau[19];
}

int main() {
    printf("%d", fiboTableau());
    return 0;
}

*/
