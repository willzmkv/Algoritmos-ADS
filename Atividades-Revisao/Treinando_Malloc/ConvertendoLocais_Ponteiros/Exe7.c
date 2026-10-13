#include <stdio.h>
#include <stdlib.h>

//int calcular(int a) {
//    a = a*2;
//    return a;
//}

//int main () {
//    int a;
//    a = 3;
//    a = calcular(a);
//    printf("Valor: %d.\n", a);
//    return 0;
//}

void calcular(int *a) {
    *a = *a * 2;
    //*a é o número contido em malloc.
}

int main () {
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 3;
    calcular(p); //Ao chamar a função, passamos o endereço de malloc.
    printf("Valor: %d.\n", *p);
    free(p);
    return 0;
}