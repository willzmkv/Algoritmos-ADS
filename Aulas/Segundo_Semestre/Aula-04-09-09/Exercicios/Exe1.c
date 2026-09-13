#include <stdio.h>

int main()
{
    int idade = 18;
    int *pIdade = &idade;
    int resposta = 0;

    printf("Valor de idade: %d.\n", idade);
    printf("Endereço de idade: %p.\n", (void *)&idade);
    printf("O endereço armazenado no ponteiro pIdade é: %p.\n", (void *)pIdade);
    printf("O valor acessado pelo ponteiro é: %d.\n", *pIdade);

    printf("Qual a idade que deseja atualizar?\n");
    scanf("%d", pIdade);

    printf("Nova idade registrada.\n");
    printf("Valor de idade: %d.\n", idade);
    printf("Idade atual: %d.\n", *pIdade);

    return 0;
}