#include <stdio.h>

int main()
{
    float preco = 0.0f;
    float *pPreco = &preco;

    printf("Informe um preço: ");
    scanf("%f", pPreco);

    printf("Aplicando desconto de 10%%...\n");
    *pPreco = (*pPreco * 0.90);

    printf("Novo valor: %.2f.\n", *pPreco);

    return 0;
}