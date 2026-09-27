#include <stdio.h>

int meuStrlen(const char *texto) {
    if (texto == NULL) {
        return 0;
    }

    int contador = 0;

    while (*texto != '\0') {
        contador++;
        texto++; // Avança o apontador para o próximo carácter
    }

    return contador;
}

int main(void) {
    char frase[] = "Linguagem C";

    printf("Tamanho da string: %d\n", meuStrlen(frase));

    return 0;
}