#include <stdio.h>
#include <stdlib.h>

// int ler() {
//     int a;
//     printf("\nDigite um valor: ");
//     scanf("%d", &a);
//     return a;
// }

// int calcular(int a) {
//     int i;
//     i=2020 - a;
//     return i;
// }

// void apresentar(int i) {
//     printf("\nIdade: %d.\n", i);
// }

// int main () {
//     int ano;
//     int idade;
//     ano = ler();
//     idade=calcular(ano);
//     apresentar(idade);
//     return 0;
// }
// --------------------- //
void lerNascimento(int *ano) {
    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", ano);
}

void lerAnoAtual(int *ano) {
    printf("\nDigite o ano atual: ");
    scanf("%d", ano);
}

void calcular(int *ano, int *idade, int *atual) {
    *idade = *atual - *ano;
}

void apresentar(int *idade) {
    printf("\nIdade: %d anos.\n", *idade);
}

int main () {
    int *anoNasc = (int*)malloc(sizeof(int));
    int *idade = (int*)malloc(sizeof(int));
    int *anoAtual = (int*)malloc(sizeof(int));
    lerNascimento(anoNasc);
    lerAnoAtual(anoAtual);
    calcular(anoNasc, idade, anoAtual);
    apresentar(idade);
    free(anoNasc);
    free(anoAtual);
    free(idade);
    return 0;
}