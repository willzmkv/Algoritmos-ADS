#include <stdio.h>
#include <stdlib.h>

// int main()
//{
//    int a;
//    printf("\nDigite um valor:");
//    scanf("%d", &a);
//    printf("Valor: %d", a);
//    return 0;
//}

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    printf("\nDigite um valor: ");
    scanf("%d", p);
    //Aqui usamos apenas "p" pois P armazena o endereço de memória do malloc.
    printf("Valor: %d.\n", *p);
    free(p);
    return 0;
}