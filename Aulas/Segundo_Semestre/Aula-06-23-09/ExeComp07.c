#include <stdio.h>

void inverterArray(int *array, int tamanho) {
    if (array == NULL || tamanho <= 1) {
        return;
    }

    int *inicio = array;                   // Aponta para o primeiro elemento
    int *fim = array + tamanho - 1;        // Aponta para o último elemento

    while (inicio < fim) {
        // Troca os valores apontados por inicio e fim
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        // Avança o apontador do início e recua o do fim
        inicio++;
        fim--;
    }
}

int main(void) {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("Array original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    inverterArray(vetor, n);

    printf("Array invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}