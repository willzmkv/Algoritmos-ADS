#include <stdio.h>

int main()
{
    int num1, num2;
    int *p1 = &num1, *p2 = &num2;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    printf("Números originais:\n1º: %d.\n2º: %d.\n", num1, num2);

    printf("Alterando por ponteiros:\n");
    printf("Informe um novo 1º número: ");
    scanf("%d", p1);

    printf("Informe um novo 2º número: ");
    scanf("%d", p2);

    printf("Números por ponteiros:\n1º: %d.\n2º: %d.\n", *p1, *p2);
    printf("Confirmando pelas variáveis originais:\n1º: %d.\n2º: %d.\n", num1, num2);

    return 0;
}