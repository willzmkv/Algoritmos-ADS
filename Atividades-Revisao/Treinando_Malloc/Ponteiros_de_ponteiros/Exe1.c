#include <stdio.h>
#include <stdlib.h>

void inicializar(int **p) {
    *p = (int*)malloc(sizeof(int));
    if (*p == NULL) {
        printf("ERRO AO ALOCAR MEMÓRIA\n");
    }
}

int main () {
        int *a = NULL;
        inicializar(&a);
        *a = 3;
        printf("%d.\n", *a);
        free(a);

    return 0;
}