#include <stdio.h>

#define TAM 5

void lerNumeros(const int *vetor, int tamanho, int *soma, int *menor, int *maior)
{
    if (vetor == NULL || tamanho <= 0 || soma == NULL || menor == NULL || maior == NULL)
    {
        return;
    }
    *soma = 0;
    *menor = *vetor;
    *maior = *vetor;

    const int *p = vetor;
    while (p < vetor + tamanho)
    {
        *soma += *p;

        if (*p < *menor)
        {
            *menor = *p;
        }
        if (*p > *maior)
        {
            *maior = *p;
        }
        p++;
    }
}

void inverter(int *vetor, int tamanho)
{
    if (vetor == NULL || tamanho <= 0)
    {
        return;
    }

    int *inicio = vetor;
    int *fim = vetor + tamanho - 1; // Aqui é o tamanho do vetor

    while (inicio < fim)
    {
        int auxiliar = *inicio;
        *inicio = *fim;
        *fim = auxiliar;

        inicio++;
        fim--;
    }
}

void exibir(const int *vetor, int tamanho)
{
    const int *p = vetor;

    while (p < vetor + tamanho)
    {
        printf("[%d] ", *p);
        p++;
    }
    printf("\n");
}

int main()
{
    int vetor[TAM] = {0};
    int tamanho = sizeof vetor / sizeof *vetor; //20 / 4 = 5;
    // tamanho faz o tamanho do vetor inteiro, ou seja 5 * 4 = 20;
    // depois divide pelo tamanho de um único elemento, ou seja 4.
    int soma = 0, menor = 0, maior = 0;
    int *p = vetor;

    while (*p < vetor + tamanho)
    {
        printf("Informe um valor entre -100 e 100.\n");
        scanf("%d", p);

        if (*p < -100 || *p > 100)
        {
            printf("Valor fora do intervalo esperado.\n");
        }
        p++;
    }
    printf("Array original:");
    exibir(vetor, tamanho);
    lerNumeros(vetor, tamanho, &soma, &menor, &maior);
    printf("Soma: %d.\nMenor: %d.\nMaior: %d.\n", soma, menor, maior);

    inverter(vetor, tamanho);
    printf("Array invertido:");
    exibir(vetor, tamanho);

    return 0;
}