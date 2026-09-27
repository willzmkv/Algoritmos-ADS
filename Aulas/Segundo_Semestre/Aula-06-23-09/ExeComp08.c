#include <stdio.h>
#include <ctype.h>

void converterParaMaiusculas(char *str) {
    if (str == NULL) {
        return;
    }

    // Percorre a string através do apontador até ao caractere terminador
    while (*str != '\0') {
        *str = (char)toupper((unsigned char)*str);
        str++; // Avança o apontador para a próxima posição de memória
    }
}

int main(void) {
    char texto[] = "Linguagem C com Ponteiros!";

    printf("Original:  %s\n", texto);

    converterParaMaiusculas(texto);

    printf("Maiúsculas: %s\n", texto);

    return 0;
}