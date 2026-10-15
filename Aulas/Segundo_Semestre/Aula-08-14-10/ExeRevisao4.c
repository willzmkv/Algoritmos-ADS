#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int tamanhoString(const char *texto){
    int tamanho = 0;

    if(texto == NULL){
        return 0;
    }

    while(*texto != '\0'){
        tamanho++;
        texto++;
    }
    return tamanho;
}

int contarVogais(const char *texto){
    int quantidade = 0;

    if(texto == NULL){
        return 0;
    }

    while(*texto != '\0'){
        switch (*texto){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                quantidade++;
                break;
        }
        texto++;
    }
    return quantidade;
}

void copiarTexto(char *destino, const char *origem){
    if(destino == NULL || origem == NULL){
        return;
    }

    while(*origem != '\0'){
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}

int main(){
    char original[80];
    char *copia = NULL;
    int tamanho, vogais;

    printf("Digite um texto de até 79 caracteres: ");
    if(fgets(original, sizeof(original), stdin) == NULL){
        printf("Não foi possivel ler o texto.\n");
        return 1;
    }

    original[strcspn(original, "\n")] = '\0';

    tamanho = tamanhoString(original);
    vogais = contarVogais(original);

    copia = malloc((tamanho +1)*sizeof *copia);

    if(copia == NULL){
        printf("Não foi possivel alocar memória para a cópia do texto.\n");
        return 1;
    }
    copiarTexto(copia, original);

    char *p = copia;

    while(*p != '\0'){
        *p = (char) toupper((unsigned char)*p);
        p++;
    }

    printf("\nOriginal: %s\n", original);
    printf("Tamanho: %d\n", tamanho);
    printf("Vogais: %d\n", vogais);
    printf("Cópia: %s\n", copia);

    free(copia);
    copia = NULL;
    p = NULL;

    return 0;
}