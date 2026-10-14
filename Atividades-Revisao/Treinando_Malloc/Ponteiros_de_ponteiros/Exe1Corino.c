#include <stdio.h>
#include <stdlib.h>

void ordernar (int *a, int *b) {
    int aux;
    if (*b > *a) {
        aux = *b;
        *b = *a;
        *a = aux;
    }
}

int main () {
    int *a = (int*)malloc(sizeof(int));
    if (a == NULL) {
        printf("ERRO NA ALOCACAO.\n");
    }
    int *b = (int*)malloc(sizeof(int));
    if (b == NULL) {
        printf("ERRO NA ALOCACAO.\n");
    }
    printf("Informe o 1º valor: ");
    scanf("%d", a);

    printf("Informe o 2º valor: ");
    scanf("%d", b);

    ordernar(a, b);
    printf("Maior %d, menor %d.\n", *a, *b);
    free(a);
    free(b);

    return 0;
}