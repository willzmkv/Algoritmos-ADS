#include <stdio.h>

char* minhaStrcpy(char *destino, const char *origem) {
    if (destino == NULL || origem == NULL) {
        return destino;
    }

    char *inicioDestino = destino; // Salva o início para retornar no final

    // Copia caractere por caractere até atingir o terminador nulo
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }

    // Adiciona o caractere terminador na string de destino
    *destino = '\0';

    return inicioDestino;
}

int main(void) {
    char origem[] = "Estrutura de Dados em C";
    char destino[50];

    minhaStrcpy(destino, origem);

    printf("Origem:  %s\n", origem);
    printf("Destino: %s\n", destino);

    return 0;
}