#include <stdio.h>

int sommaNumeriPari(int n1, int n2) {
    int somma = 0;
    for (int i = n1; i <= n2; i++) {
        if (i % 2 == 0) {
            somma += i;
        }
    }
    return somma;
}

int main(void) {
    int n1, n2;
    printf("Inserisci numero di n1: ");
    scanf("%d", &n1);
    printf("Inserisci numero di n2: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        int swap = 0;
        swap = n1;
        n1 = n2;
        n2 = swap;
    }
    printf("%d %d \n", n1, n2);

    printf("la somma e' %d", sommaNumeriPari(n1, n2));
}
