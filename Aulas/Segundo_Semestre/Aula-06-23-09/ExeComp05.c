#include <stdio.h>

void calcularMedia(float *a, float *b) {
    if (a != NULL && b != NULL) {
        float media = (*a + *b) / 2.0f;
        *a = media;
        *b = media;
    }
}

int main(void) {
    float nota1 = 7.5f;
    float nota2 = 8.5f;

    printf("Valores originais: nota1 = %.2f, nota2 = %.2f\n", nota1, nota2);

    calcularMedia(&nota1, &nota2);

    printf("Valores após a função: nota1 = %.2f, nota2 = %.2f\n", nota1, nota2);

    return 0;
}