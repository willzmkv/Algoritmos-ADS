#include <stdio.h>

int main()
{

    int array[5];
    int *pArray = array;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o número %d de 5 no Array.\n", i + 1);
        printf("Seu número: ");
        scanf("%d", pArray + i);
    }

    printf("Todos números cadastrados!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Número %d: %d.\n", i + 1, *(pArray + i));
    }

    printf("Calculando a soma dos números...\n");
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += *(pArray + i);
    }
    printf("Os números somados dão: %d.\n", soma);
    printf("Encontrando o maior valor...\n");
    int maior = pArray[0];

    for (int i = 1; i < 5; i++)
    {
        if (*(pArray + i) > maior)
        {
            maior = *(pArray + i);
        }
    }
    printf("O maior número digitado é: %d.\n", maior);

    return 0;
}