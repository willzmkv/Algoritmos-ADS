#include <stdio.h>

int tamanhoString(const char *texto)
{
    int tamanho = 0;
    if (texto == NULL)
    {
        return 0;
    }
    while (*texto != '\0')
    {
        tamanho++;
        texto++;
    }
    return tamanho;
}

int main(void)
{
    char nome[] = "Mariana";
    printf("Tamanho: %d\n", tamanhoString(nome));
    return 0;
}