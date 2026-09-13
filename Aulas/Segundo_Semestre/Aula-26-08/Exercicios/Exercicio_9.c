#include <stdio.h>
#include <string.h>

struct Funcionario {
    int matricula;
    char nome[50];
    float salario;
};

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
    // Declarando 5 variáveis individuais
    struct Funcionario f1, f2, f3, f4, f5;
    
    float soma_salarios = 0, media = 0, maior_salario = 0;
    char nome_maior[50];
    int qtd_acima_media = 0;

    // --- LEITURA DOS DADOS ---
    printf("=== Cadastro do Funcionario 1 ===\n");
    printf("Matricula: ");
    scanf("%d", &f1.matricula);
    limparBuffer();
    ler_string(f1.nome, 50, "Nome: ");
    printf("Salario: ");
    scanf("%f", &f1.salario);

    printf("\n=== Cadastro do Funcionario 2 ===\n");
    printf("Matricula: ");
    scanf("%d", &f2.matricula);
    limparBuffer();
    ler_string(f2.nome, 50, "Nome: ");
    printf("Salario: ");
    scanf("%f", &f2.salario);

    printf("\n=== Cadastro do Funcionario 3 ===\n");
    printf("Matricula: ");
    scanf("%d", &f3.matricula);
    limparBuffer();
    ler_string(f3.nome, 50, "Nome: ");
    printf("Salario: ");
    scanf("%f", &f3.salario);

    printf("\n=== Cadastro do Funcionario 4 ===\n");
    printf("Matricula: ");
    scanf("%d", &f4.matricula);
    limparBuffer();
    ler_string(f4.nome, 50, "Nome: ");
    printf("Salario: ");
    scanf("%f", &f4.salario);

    printf("\n=== Cadastro do Funcionario 5 ===\n");
    printf("Matricula: ");
    scanf("%d", &f5.matricula);
    limparBuffer();
    ler_string(f5.nome, 50, "Nome: ");
    printf("Salario: ");
    scanf("%f", &f5.salario);


    // --- CÁLCULOS E VERIFICAÇÕES ---
    // 1. Média salarial
    soma_salarios = f1.salario + f2.salario + f3.salario + f4.salario + f5.salario;
    media = soma_salarios / 5.0;

    // 2. Maior salário (Assumimos inicialmente que f1 é o maior e comparamos com o resto)
    maior_salario = f1.salario;
    strcpy(nome_maior, f1.nome); // Copia o nome do f1 para a variável de controle

    if (f2.salario > maior_salario) { maior_salario = f2.salario; strcpy(nome_maior, f2.nome); }
    if (f3.salario > maior_salario) { maior_salario = f3.salario; strcpy(nome_maior, f3.nome); }
    if (f4.salario > maior_salario) { maior_salario = f4.salario; strcpy(nome_maior, f4.nome); }
    if (f5.salario > maior_salario) { maior_salario = f5.salario; strcpy(nome_maior, f5.nome); }

    // 3. Quantos ganham acima da média
    if (f1.salario > media) qtd_acima_media++;
    if (f2.salario > media) qtd_acima_media++;
    if (f3.salario > media) qtd_acima_media++;
    if (f4.salario > media) qtd_acima_media++;
    if (f5.salario > media) qtd_acima_media++;


    // --- APRESENTAÇÃO DOS DADOS ---
    printf("\n================ RELATORIO GERAL ================\n");
    printf("Matricula: %d | Nome: %s | Salario: R$%.2f\n", f1.matricula, f1.nome, f1.salario);
    printf("Matricula: %d | Nome: %s | Salario: R$%.2f\n", f2.matricula, f2.nome, f2.salario);
    printf("Matricula: %d | Nome: %s | Salario: R$%.2f\n", f3.matricula, f3.nome, f3.salario);
    printf("Matricula: %d | Nome: %s | Salario: R$%.2f\n", f4.matricula, f4.nome, f4.salario);
    printf("Matricula: %d | Nome: %s | Salario: R$%.2f\n", f5.matricula, f5.nome, f5.salario);
    
    printf("-------------------------------------------------\n");
    printf("MAIOR SALARIO: %s (R$%.2f)\n", nome_maior, maior_salario);
    printf("MEDIA SALARIAL: R$%.2f\n", media);
    printf("ACIMA DA MEDIA: %d funcionario(s)\n", qtd_acima_media);
    printf("=================================================\n");

    return 0;
}