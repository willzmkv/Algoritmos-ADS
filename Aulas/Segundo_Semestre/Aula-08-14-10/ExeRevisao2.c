#include <stdio.h>
#include <stdlib.h>

void tentarAlterar(int valor)
{
    valor = 999;
    printf("Dentro da função tentarAlterar: %d.\n", valor);
}

void ordenar(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return;
    }

    if (*a > *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

void calcular(int a, int b, int *soma, int *produto)
{
    if (soma == NULL || produto == NULL)
    {
        return;
    }
    *soma = a + b;
    *produto = a * b;
}

int main()
{
    int a = 0;
    int b = 0;
    int soma = 0;
    int produto = 0;
    int *p = &a;

    printf("Informe o primeiro valor entre -100 e 100: ");
    scanf("%d", &a);

    printf("Informe o segundo valor entre -100 e 100: ");
    scanf("%d", &b);

    if (a < -100 || a > 100 || b < -100 || b > 100)
    {
        printf("Os valores devem estar entre -100 e 100.\n");
        return 1;
    }

    tentarAlterar(a);
    printf("Primeiro valor após tentarAlterar é %d.\n", a);

    ordenar(p, &b);
    printf("Valores ordenados: %d - %d.\n", a, b);

    calcular(a, b, &soma, &produto);
    printf("Soma: %d.\nProduto: %d.\n", soma, produto);

    printf("Endereço de A: %p.\n", (void *)&a);
    printf("Endereço armazenado em p: %p\n", (void *)p);
    printf("Endereço da váriavel p: %p\n", (void *)&p);

    printf("\nsizeof a: %zu bytes.\n", sizeof a);
    printf("\nsizeof p: %zu bytes.\n", sizeof p);

    return 0;
}

//Porque &a e p são o endereço de a.
//Porque o tamanho do espaço de memória muda conforme o tipo de dado, é um e o endeço.

