#include <stdio.h>

void dobrarElementos(int vetor[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        vetor[i] = vetor[i] * 2;
    }
}

int main(void)
{
    int numeros[] = {2, 4, 6, 8};
    dobrarElementos(numeros, 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}