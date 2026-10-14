#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarVogais(const char *texto)
{
    int contador = 0;
    for (int i = 0; *(texto + i) != '\0'; i++)
    {   
        char c = *(texto + i);
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    char nome[30];

    printf("Informe um nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    int quantidade = contarVogais(nome);
    printf("A quantidade de vogais do nome %s, é de %d.\n", nome, quantidade);
    return 0;
}