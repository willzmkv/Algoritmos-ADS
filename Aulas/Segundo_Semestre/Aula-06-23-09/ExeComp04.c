#include <stdio.h>

void tornarPositivo(int *valor) {
    if (valor != NULL && *valor < 0) {
        *valor = (*valor) * -1;
    }
}

int main() {
    int valor = -42;

    printf("Valor antes: %d\n", valor);

    tornarPositivo(&valor);

    printf("Valor depois: %d\n", valor);

    return 0;
}