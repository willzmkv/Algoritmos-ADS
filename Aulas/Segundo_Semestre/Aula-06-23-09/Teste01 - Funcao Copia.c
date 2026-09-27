#include <stdio.h>
void dobrarCopia(int numero)
{
    numero = numero * 2;
    printf("Dentro da funcao: %d\n", numero); // 20
}
int main(void)
{
    int valor = 10;
    dobrarCopia(valor);
    printf("Depois da funcao: %d\n", valor); // 10
    return 0;
}

//A função modificou sua cópia, não a variável valor.