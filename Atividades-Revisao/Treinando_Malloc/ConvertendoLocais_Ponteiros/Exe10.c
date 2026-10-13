#include <stdio.h>
#include <stdlib.h>

void apresentar(int *p) {
    for (int i = 0; i<3; i++) {
        printf("\n%d", *(p+i));
    }
}

void iniciar(int *p) {
    *p = 10;
    //Primeiro endereço de memória
    *(p+1) = 15;
    //O P+1 significa que vai pular 1 número inteiro
    *(p+2) = 20;
    //O P+2 significa que vai pular 2 número inteiro
}

int main () {
    int *p = (int*)malloc(3*sizeof(int));
    iniciar(p);
    apresentar(p);
}