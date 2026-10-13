#include <stdio.h>
#include <stdlib.h>

//int calcular(int a) {
//    a = a * 2;
//    return a;
//}

//int main () {
//    int a;
//    int dobro;
//    a = 3;
//    dobro = calcular(a);
//    printf("Valor de a: %d. || Valor dobrado: %d.\n", a, dobro);
//    return 0;
//}

void calcular(int *a, int *dobro) {
    *dobro = *a * 2;
}

int main () {
    int *a;
    a = (int*)malloc(sizeof(int));
    *a = 3;
    int *dobro;
    dobro = (int*)malloc(sizeof(int));
    calcular(a, dobro);
    printf("Valor de a: %d. || Valor dobrado: %d.\n", *a, *dobro);
    free(a);
    free(dobro);
    return 0;
}