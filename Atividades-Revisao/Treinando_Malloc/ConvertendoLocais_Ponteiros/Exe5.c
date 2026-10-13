#include <stdio.h>
#include <stdlib.h>

// void apresentar(int b) {
//    printf("Valor: %d.\n", b);
//}

//int main () {
//    int a;
//    a = 4;
//    apresentar(a);
//    return 0;
//}

void apresentar(int *b) {
    //"b" tem um endereço, e recebe como valor o endereço de malloc.
    printf("Valor: %d.\n", *b);
    //Apresento o valor apontado por b.
}

int main () {
    int *a;
    //A variável "a" é declarada.
    a = (int*)malloc(sizeof(int));
    //Reservo espaço na memória usando malloc.
    *a = 4;
    //Coloco o número 4 no espaço do malloc.
    apresentar(a);
    //Envio o valor para apresentar na função.
    free(a);
    //Libera o espaço reservado.
    return 0;
}