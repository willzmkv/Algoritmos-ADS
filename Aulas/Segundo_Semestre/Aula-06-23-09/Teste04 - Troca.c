#include <stdio.h>
void trocar(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return;
    }
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main(void)
{
    int x = 10;
    int y = 20;
    printf("Antes: x = %d, y = %d\n", x, y);
    trocar(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);
    return 0;
}