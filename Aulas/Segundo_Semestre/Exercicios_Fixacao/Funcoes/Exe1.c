#include <stdio.h>
#include <string.h>

int main()
{
    char nome_serie[30] = "";
    int meta_episodios = 0;
    int historico[7][2];
    int dias_registrados = 0;

    int opcao;

    printf("\n==== Maratona Tracker ====\n");
    printf("1 - Configurar maratona\n");
    printf("2 - Registrar dia assistido\n");
    printf("3 - Relatorios\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 0:
        printf("Saindo...\n");
        return 0;
        break;
    case 1:
        lerNomeSerie(nomeSerie);
        metaEpisodios = lerMetaDiaria();
        break;
    }
}