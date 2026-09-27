// Nome: Wíllian Júnior Zanella
// Data: 16/09/2026

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_ALUNOS 38
#define QTD_NOTAS 3

typedef enum
{
    MATRICULADO = 1,
    TRANCADO,
    FORMADO
} SituacaoAluno;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char cidade[40];
    char estado[3];
} Endereco;

typedef struct Aluno
{
    int matricula;
    char nome[50];
    Data nascimento;
    Endereco endereco;
    float notas[QTD_NOTAS];
    float media;
    SituacaoAluno situacao;
} Aluno;

void limparBuffer()
{ // Função usada para limpar o buffer do teclado.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void lerStringObrigatoria(char destino[], int tamanho, char mensagem[])
{
    do
    {
        printf("%s", mensagem);
        fgets(destino, tamanho, stdin);
        destino[strcspn(destino, "\n")] = '\0';

        if (strlen(destino) == 0)
        {
            printf("ERRO: O campo nao pode ser vazio.\n");
        }
    } while (strlen(destino) == 0);
}

void lerTurma(Aluno turma[], int quantidade)
{
}

float calcularMedia(float notas[], int quantidade)
{
}

void imprimirAluno(Aluno aluno)
{
}

void imprimirTurma(Aluno turma[], int quantidade)
{
}

int buscarPorMatricula(Aluno turma[], int quantidade, int matricula)
{
}

float calcularMediaTurma(Aluno turma[], int quantidade)
{
}

int localizarMaiorMedia(Aluno turma[], int quantidade)
{
}

int contarPorSituacao(Aluno turma[], int quantidade, SituacaoAluno situacao)
{
}

void listarPorSituacao(Aluno turma[], int quantidade, SituacaoAluno situacao)
{
}

void listarAprovados(Aluno turma[], int quantidade) {
}

int main {
    int qtd_alunos = 0;
    struct Aluno aluno[];

    printf("=== Gerenciador de turmas ===\n");
    do
    {
        printf("Quantos alunos deseja cadastrar? Min 5 / Max 30\n");
        printf("Sua resposta: ");
        scanf("%d", &qtd_alunos);
        if (qtd_alunos < 5 || qtd_alunos > 30)
        {
            printf("Erro: Quantidade de alunos deve ser entre 5 e 30.\n");
        }
    } while (qtd_alunos < 5 || qtd_alunos > 30);
}