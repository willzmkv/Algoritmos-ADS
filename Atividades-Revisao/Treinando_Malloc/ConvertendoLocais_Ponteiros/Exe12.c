#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int numeros[10];
//     for (int i = 0; i < 10; i++)
//     {
//         numeros[i] = 0;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Insira o %dº número: ", i + 1);
//         scanf("%d", &numeros[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%dº número: %d.\n", i + 1, numeros[i]);
//     }
//     return 0;
// }

void zerarNumeros(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = 0;
    }
}

void lerNumeros(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", (p + i));
    }
}

void ordernar(int *p) {
    int aux;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (*(p + i) < *(p + j))
            {
                aux = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = aux;
            }
        }
    }
}

void imprimirNumeros(int *p)
{

    for (int i = 0; i < 10; i++)
    {
        printf("%dº número: %d.\n", i + 1, *(p + i));
    }
}
int main()
{
    int *numeros = (int *)malloc(10 * (sizeof(int)));
    zerarNumeros(numeros);
    lerNumeros(numeros);
    ordernar(numeros);
    imprimirNumeros(numeros);
    free(numeros);
    return 0;
}