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
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void lerTurma(Aluno turma[], int quantidade)
{
}

float calcularMedia(float notas[], int quantidade)
{
    float soma = 0.0f;
    float mediaAluno = 0.0f;

    for (int i = 0; i < quantidade; i++)
    {
        soma += notas[i];
    }

    mediaAluno = (soma / quantidade);
    return mediaAluno;
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

void listarAprovados(Aluno turma[], int quantidade)
{
}

int main()
{
    int qtd_alunos = 0;
    struct Aluno aluno[MAX_ALUNOS];
    Aluno *pAluno = aluno;
    SituacaoAluno situacao;

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

    for (int i = 0; i < qtd_alunos; i++)
    {
        printf("Informe a matrícula do %dº aluno:", i + 1);
        scanf("%d", &pAluno[i].matricula);
        limparBuffer();

        printf("Digite o nome do aluno: ");
        fgets((pAluno[i]).nome, sizeof((pAluno[i]).nome), stdin);
        (pAluno[i]).nome[strcspn((pAluno[i]).nome, "\n")] = '\0';

        printf("Informe a data de nascimento do aluno:\n");
        do
        {
            printf("Dia: ");
            scanf("%d", &pAluno[i].nascimento.dia);
            if (pAluno[i].nascimento.dia < 1 || pAluno[i].nascimento.dia > 31)
            {
                printf("Erro: Dia inexistente!\n");
            }
        } while (pAluno[i].nascimento.dia < 1 || pAluno[i].nascimento.dia > 31);
        limparBuffer();

        do
        {
            printf("Mês: ");
            scanf("%d", &pAluno[i].nascimento.mes);
            if (pAluno[i].nascimento.mes < 1 || pAluno[i].nascimento.mes > 12)
            {
                printf("Erro: Mês inexistente!\n");
            }
        } while (pAluno[i].nascimento.mes < 1 || pAluno[i].nascimento.mes > 12);
        limparBuffer();

        do
        {
            printf("Ano: ");
            scanf("%d", &pAluno[i].nascimento.ano);
            if (pAluno[i].nascimento.ano > 2026)
            {
                printf("Erro: Ano inexistente!\n");
            }
        } while (pAluno[i].nascimento.ano > 2026);

        limparBuffer();

        for (int n = 0; n < QTD_NOTAS; n++)
        {
            do
            {
                printf("Informe a %dª nota:\n", n + 1);
                printf("Sua resposta: ");
                scanf("%f", &pAluno[i].notas[n]);
                if (pAluno[i].notas[n] < 0.0f || pAluno[i].notas[n] > 10.0f)
                {
                    printf("Erro: Nota impossível!\n");
                }
            } while (pAluno[i].notas[n] < 0.0f || pAluno[i].notas[n] > 10.0f);
            limparBuffer();
        }
        pAluno[i].media = calcularMedia(pAluno[i].notas, QTD_NOTAS);
        printf("A média do aluno é de %.2f.\n", pAluno[i].media);

        do
        {
            printf("Informe a situação do aluno:\n");
            printf("1 - Matriculado\n");
            printf("2 - Trancado\n");
            printf("3 - Formado\n");
            printf("Sua resposta: ");
            scanf("%d", &situacao);
            if (situacao < MATRICULADO || situacao > FORMADO)
            {
                printf("Erro: Opção inválida!\n");
            }
        } while (situacao < MATRICULADO || situacao > FORMADO);
        limparBuffer();

        switch (situacao)
        {
        case MATRICULADO:
            printf("O aluno está matriculado!\n");
            break;
        case TRANCADO:
            printf("O aluno está com o curso trancado!\n");
            break;
        case FORMADO:
            printf("O aluno está formado!\n");
            break;
        }
    }
}