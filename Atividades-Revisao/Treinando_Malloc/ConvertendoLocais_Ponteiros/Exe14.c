#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int *valores = (int *)malloc(10 * sizeof(int));
//     if (valores == NULL)
//     {
//         printf("ERRO AO ALOCAR MEMÓRIA\n");
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("Informe o %dº valor: ", i + 1);
//         scanf("%d", (valores + i));
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("O %dº valor é %d, e x2 é: %d.\n ", i + 1, *(valores + i), (*(valores + i) * 2));
//     }
//     free(valores);

//     return 0;
// }

void lerValores(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", (p + i));
    }
}

void apresentar(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        printf("O %dº valor é %d, e x2 é: %d.\n ", i + 1, *(p + i), (*(p + i) * 2));
    }
}

int main()
{
    int *valores = (int *)malloc(10 * sizeof(int));
    if (valores == NULL)
    {
        printf("ERRO AO ALOCAR MEMÓRIA\n");
    }

    lerValores(valores);
    printf("\n");
    apresentar(valores);
    free(valores);
    return 0;
}