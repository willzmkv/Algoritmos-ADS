#include <stdio.h>

void encontrarMenorMaior(const int *array, int tamanho, int *menor, int *maior) {
    if (array == NULL || menor == NULL || maior == NULL || tamanho <= 0) {
        return;
    }

    // Inicializa o menor e o maior com o primeiro elemento do array
    *menor = array[0];
    *maior = array[0];

    // Percorre os restantes elementos comparando os valores
    for (int i = 1; i < tamanho; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main(void) {
    int valores[] = {24, 7, 42, -5, 18, 99, 3};
    int total = sizeof(valores) / sizeof(valores[0]);
    int min, max;

    encontrarMenorMaior(valores, total, &min, &max);

    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);

    return 0;
}