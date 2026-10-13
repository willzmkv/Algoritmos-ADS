#include <stdio.h>
#include <stdlib.h>

//int ler()
//{
//    int a;
//    printf("Digite um valor: ");
//    scanf("%d", &a);
//    return a;
//}

//int main()
//{
//    int a;
//    a = ler();
//    printf("Valor: %d.\n", a);
//    return 0;
//}

void ler(int *x)
{
    printf("Digite um valor: ");
    scanf("%d", x);
}

int main()
{
    int *a;
    a = (int*)malloc(sizeof(int));
    ler(a);
    printf("Valor: %d.\n", *a);
    return 0;
}

//Nesse código, a função ler recebe o valor de a, que
//é o endereço de malloc. Ao fazer o scanf usando apenas "x"
//acessamos diretamente o endereço de malloc, podendo alterar.