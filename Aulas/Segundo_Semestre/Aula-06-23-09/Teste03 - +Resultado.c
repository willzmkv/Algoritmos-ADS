#include <stdio.h>
void calcular(int a, int b, int *soma, int *produto)
{
    if (soma != NULL)
    {
        *soma = a + b;
    }
    if (produto != NULL)
    {
        *produto = a * b;
    }
}

int main(void)
{
    int resSoma = 0;
    int resProduto = 0;
    calcular(5, 4, &resSoma, &resProduto);
    printf("Soma: %d\n", resSoma);
    printf("Produto: %d\n", resProduto);
    return 0;
}