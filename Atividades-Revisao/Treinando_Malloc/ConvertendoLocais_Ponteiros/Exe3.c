#include <stdio.h>
#include <stdlib.h>

//int main () {
//    char z;
//    z = 'c';
//    printf("Valor: %c.\n", z);
//    return 0;
//}

int main () {
    char *p;
    p = (char *)malloc(sizeof(char));
    *p = 'c';
    printf("Valor: %c.\n", *p);
    return 0;
}