#include <stdio.h>
// Modifica a variável do chamador, caso o endereço recebido seja válido.

void dobrar(int *numero)
{
    if (numero != NULL)
    {
        *numero = *numero * 2;
    }
}
int main(void)
{
    int valor = 10;
    printf("Antes: %d\n", valor);
    dobrar(&valor); // Envia o endereço da variável valor.
    printf("Depois: %d\n", valor);
    return 0;
}