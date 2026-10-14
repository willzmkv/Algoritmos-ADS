#include <stdio.h>
#include <stdlib.h>

void lerNotas(float *p) {
    for (int i = 0; i < 5; i++) {
        printf("Informe a %dª nota: ", i + 1);
        scanf("%f", (p + i));
    }
}

void calcularMedia(float *p, float *media) {
    *media = 0.0f;
    for (int i = 0; i < 5; i++) {
        *media += *(p + i);
    }
    *media = (*media / 5);
}

int main () {
    float *notas = (float*)malloc(5*(sizeof(float)));
    if (notas == NULL) {
        printf("ERRO AO ALOCAR MEMÓRIA\n");
        return 1;
    }
    float *media = (float*)malloc(sizeof(float));
    if (media == NULL) {
        printf("ERRO AO ALOCAR MEMÓRIA\n");
        return 1;
    }

    lerNotas(notas);
    calcularMedia(notas, media);
    printf("A média das notas é de %.2f.\n", *media);
    free(notas);
    free(media);

    return 0;

}