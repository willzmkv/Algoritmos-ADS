#include <stdio.h>
void exibirVetor(const int vetor[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main(void)
{
    int numeros[] = {10, 20, 30, 40, 50};
    exibirVetor(numeros, 5);
    return 0;
}