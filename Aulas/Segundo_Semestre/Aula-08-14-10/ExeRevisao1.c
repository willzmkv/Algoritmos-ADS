/*Exercício 1 - Revisão*/
#include <stdio.h>

typedef enum Estado
{
    DESLIGADO = 1,
    LIGADO = 2
} Estado;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int codigo;
    Estado estado;
    Data revisao
} Equipamento;

void exibirEquipamento(Equipamento equipamento)
{
    printf("Código: %d\n", equipamento.codigo);

    switch (equipamento.estado)
    {
    case DESLIGADO:
        printf("Estado: DESLIGADO\n");
        break;

    case LIGADO:
        printf("Estado: LIGADO\n");
        break;
    }

    printf("Revisão: %d/%d/%d\n",
           equipamento.revisao.dia,
           equipamento.revisao.mes,
           equipamento.revisao.ano);
}

int main()
{
    Equipamento original = {10, DESLIGADO, {1, 10, 2026}};
    Equipamento copia = original;
    int opcao;

    printf("Informe o novo estado:\n");
    printf("1 - DESLIGADO\n2 - LIGADO\nOpção: ");
    scanf("%d", &opcao);

    if (opcao < DESLIGADO || opcao > LIGADO)
    {
        printf("Estado inválido!\n");
        return 1;
    }

    copia.estado = (Estado)opcao;
    ~

        printf("Informe o dia da revisão: ");
    scanf("%d", &copia.revisao.dia);

    printf("Informe o mês da revisão: ");
    scanf("%d", &copia.revisao.mes);

    printf("Informe o ano da revisão: ");
    scanf("%d", &copia.revisao.ano);

    printf("\n==== REGISTRO ORIGINAL ====\n");
    exibirEquipamento(original);

    printf("\n==== REGISTRO COPIADO ====\n");
    exibirEquipamento(copia);

    if (original.codigo == copia.codigo &&
        original.estado == copia.estado &&
        original.revisao.dia == copia.revisao.dia &&
        original.revisao.mes == copia.revisao.mes &&
        original.revisao.ano == copia.revisao.ano)
    {
        printf("\nOs registros são iguais.\n");
    }
    else
    {
        printf("\nOs registros são diferentes!\n");
    }
    return 0;
}
