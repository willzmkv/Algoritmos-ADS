#include <stdio.h>
#include <string.h>

int contarVogais(const char *texto)
{
    int vogais = 0;
    if (texto == NULL) {
        return 0;
    }

    while (*texto != '\0')
    {
        if (*texto == 'a' || *texto == 'e' || *texto == 'i' || *texto == 'o' || *texto == 'u' || *texto == 'A' || *texto == 'E' || *texto == 'I' || *texto == 'O' || *texto == 'U')
        {
            vogais++;
        }
        texto++;
    }

    return vogais;
}

int main()
{
    char nome[30];
    char *pTexto = nome;
    int quantidade;

    printf("Informe um nome para contar vogais\n");
    do
    {
        printf("Nome desejado: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        if (strlen(nome) == 0)
        {
            printf("Erro: Nome não pode estar vazio.\n");
        }
    } while (strlen(nome) == 0);

    quantidade = contarVogais(pTexto);
    printf("A quantidade de vogais é de %d.\n", quantidade);

    return 0;
}