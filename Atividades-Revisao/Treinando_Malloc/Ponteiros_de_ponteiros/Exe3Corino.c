#include <stdio.h>
#include <stdlib.h>

// int main () {
//     int quantidade = 0;
//     float *notas = (float*)malloc(quantidade*(sizeof(float)));
//     if (notas == NULL) {
//         printf("ERRO AO ALOCAR MEMÓRIA\n");
//         return 1;
//     }
//

//     lerNotas(notas);
//     calcularMedia(notas, media);
//     printf("A média das notas é de %.2f.\n", *media);
//     free(notas);
//     free(media);

//     return 0;

// }

void iniciarNotas(float **p, int quantidade)
{
    *p = (float *)malloc(quantidade * (sizeof(float)));
    if (*p == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA.\n");
    }
}

void iniciarMedia(float **p)
{
    *p = (float *)malloc(sizeof(float));
    if (*p == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA.\n");
    }
}

void lerNotas(float *p, int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("Informe a %dª nota: ", i + 1);
        scanf("%f", (p + i));
    }
}

void calcularMedia(float *p, float *media, int quantidade)
{
    *media = 0.0f;
    for (int i = 0; i < quantidade; i++)
    {
        *media += *(p + i);
    }
    *media = (*media / quantidade);
}

void maiorNota(float *p, int quantidade)
{
    float *maior = p;
    for (int i = 1; i < quantidade; i++)
    {
        if (*(p + i) > *(maior))
        {
            maior = (p + i);
        }
    }
    printf("A maior nota é %.2f.\n", *maior);
}

void menorNota(float *p, int quantidade)
{
    float *menor = p;
    for (int i = 1; i < quantidade; i++)
    {
        if (*(p + i) < *(menor))
        {
            menor = (p + i);
        }
    }
    printf("A menor nota é %.2f.\n", *menor);
}

void acimaMedia(float *p, int quantidade)
{
    int contador = 0;
    for (int i = 0; i < quantidade; i++)
    {
        if (*(p + i) > 7.00f)
        {
            contador++;
        }
    }
    printf("A quantidad de notas acima da média é de %d.\n", contador);
}

int main()
{
    int *quantidade = (int *)malloc(sizeof(int));
    float *notas = NULL;
    float *media = NULL;
    do
    {
        printf("Informe a quantidade de notas: ");
        scanf("%d", quantidade);
        if (*quantidade <= 0)
        {
            printf("Precisa ser maior que zero.\n");
        }
    } while (*quantidade <= 0);
    iniciarNotas(&notas, *quantidade);
    iniciarMedia(&media);
    lerNotas(notas, *quantidade);
    calcularMedia(notas, media, *quantidade);
    maiorNota(notas, *quantidade);
    menorNota(notas, *quantidade);
    acimaMedia(notas, *quantidade);
    free(quantidade);
    free(notas);
    free(media);

    return 0;
}