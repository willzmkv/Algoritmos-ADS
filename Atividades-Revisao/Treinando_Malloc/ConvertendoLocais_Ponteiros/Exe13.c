#include <stdio.h>
#include <stdlib.h>

int main () {
    int *valores = (int*)malloc(10*sizeof(int)); 

    for (int i = 0; i < 10; i++) {
        printf("Insira o %dº valor: ", i + 1);
        scanf("%d", (valores + i));
    }

    int *maior = valores;
    for (int i = 1; i < 10; i++) {
        if (*(valores + i) > *(maior)) {
            maior = (valores + i);
        }
    }

    printf("O maior valor é %d.\n", *maior);
    printf("Posição (índice): %d\n", (maior - valores) + 1);
    printf("Endereço de memória: %p\n", maior);

    free(valores);

    return 0;
}