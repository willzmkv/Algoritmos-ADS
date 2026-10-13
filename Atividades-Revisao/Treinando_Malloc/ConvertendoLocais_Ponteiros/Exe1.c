#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int a;
//     a = 3;
//     printf("Valor: %d.\n", a);
//     return 0;
// }

int main()
{
    int *p; //Ponteiro é desferenciado
    p = (int *)malloc(sizeof(int)); 
    //O ponteiro P vai receber o endereço de memória alocado por malloc
    *p = 3;
    //Usamos o ponteiro para manipular esse endereço de memória
    printf("\n%d.", *p);
    free(p);
    //Libero o espaço da memória
    return 0;
}