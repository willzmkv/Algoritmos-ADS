#include <stdio.h>
#include <stdlib.h>

//int main () {
//    double x;
//    x = 3.2;
//    printf("Valor: %f.\n", x);
//   return 0;
//}

int main () {
    double *p;
    p = (double *)malloc(sizeof(double));
    *p = 3.2;
    printf("Valor: %f.\n", *p);
    free(p);
    return 0;
}