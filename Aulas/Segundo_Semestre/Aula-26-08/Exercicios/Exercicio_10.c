#include <stdio.h>
#include <string.h>

// 1. Criação do enum (Ao iniciar com 1, os próximos assumem 2, 3 e 4 automaticamente)
enum TipoVeiculo {
    MOTOCICLETA = 1,
    CARRO,
    CAMINHAO,
    ONIBUS
};

// 2. Criação da struct
struct Veiculo {
    char placa[10];
    char modelo[50];
    int ano;
    enum TipoVeiculo tipo; 
};

// Funções auxiliares para leitura segura
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler_string(char destino[], int tamanho, char mensagem[]) {
    do {
        printf("%s", mensagem);
        fgets(destino, tamanho, stdin);
        destino[strcspn(destino, "\n")] = '\0';

        if (strlen(destino) == 0) {
            printf("ERRO: O campo nao pode ser vazio.\n");
        }
    } while (strlen(destino) == 0);
}

int main() {
    struct Veiculo v1;
    float valor_pedagio = 0;
    int opcao_tipo;

    printf("=== Cadastro de Veiculo ===\n");
    ler_string(v1.placa, 10, "Placa: ");
    ler_string(v1.modelo, 50, "Modelo: ");
    
    printf("Ano: ");
    scanf("%d", &v1.ano);
    
    // Leitura do tipo baseada no enum
    printf("\nTipos disponiveis:\n");
    printf("1 - Motocicleta\n2 - Carro\n3 - Caminhao\n4 - Onibus\n");
    printf("Informe o tipo do veiculo: ");
    scanf("%d", &opcao_tipo);
    v1.tipo = (enum TipoVeiculo)opcao_tipo; // Converte o int lido para o tipo enum

    // 3. Determinação do valor do pedágio usando switch
    switch (v1.tipo) {
        case MOTOCICLETA:
            valor_pedagio = 5.00;
            break;
        case CARRO:
            valor_pedagio = 10.00;
            break;
        case CAMINHAO:
            valor_pedagio = 20.00;
            break;
        case ONIBUS:
            valor_pedagio = 15.00;
            break;
        default:
            printf("Tipo de veiculo invalido!\n");
            valor_pedagio = 0.00;
            break;
    }

    // 4. Apresentação dos dados
    printf("\n================ TICKET DE PEDAGIO ================\n");
    printf("Placa: %s\n", v1.placa);
    printf("Modelo: %s\n", v1.modelo);
    printf("Ano: %d\n", v1.ano);
    printf("VALOR COBRADO: R$%.2f\n", valor_pedagio);
    printf("===================================================\n");

    return 0;
}