#include <stdio.h>

int dividir(int dividendo, int divisor, int *quociente, int *resto)
{
    if (divisor == 0)
    {
        return 0;
    }
    *quociente = (dividendo / divisor);
    *resto = dividendo % divisor;

    return 1;
}

int main()
{
    int num1, num2;
    int quociente, resto;

    printf("Informe o número dividendo: ");
    scanf("%d", &num1);

    printf("Informe o número divisor: ");
    scanf("%d", &num2);

    if (dividir(num1, num2, &quociente, &resto))
    {
        printf("Quociente: %d, Resto: %d.\n", quociente, resto);
    }
    else
    {
        printf("Erro: Divisão por zero!\n");
    }

    return 0;
}