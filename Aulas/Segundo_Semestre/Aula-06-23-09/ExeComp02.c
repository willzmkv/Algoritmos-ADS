#include <stdio.h>

int main () {
    float numero;
    float *pNum = &numero;

    printf("Informe um número real: ");
    scanf("%f", pNum);

    float dobro = (*pNum) * 2;

    printf("Dobro: %.2f.\n", dobro);

    return 0;
}