// Nome: Wíllian Júnior Zanella
// Data: 20/09/2026
//

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
    printf("Matrícula: %d.\n", aluno.matricula);
    printf("Nome: %s.\n", aluno.nome);
    printf("Data de nascimento: %d|%d|%d.\n", aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano);
    printf("Endereço: Cidade: %s | Estado: %s.\n", aluno.endereco.cidade, aluno.endereco.estado);
    printf("Notas atuais:\n");
    for (int n = 0; n < QTD_NOTAS; n++)
    {
        printf("%dª nota: %.2f.\n", n + 1, aluno.notas[n]);
    }
    printf("Média atual: %.2f.\n", aluno.media);
    if (aluno.media >= 7.0f)
    {
        printf("O aluno está aprovado!\n");
    }
    switch (aluno.situacao)
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

void imprimirTurma(Aluno turma[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("%dº aluno.\n", i + 1);
        printf("Matrícula: %d.\n", turma[i].matricula);
        printf("Nome: %s.\n", turma[i].nome);
        printf("Data de nascimento: %d|%d|%d.\n", turma[i].nascimento.dia, turma[i].nascimento.mes, turma[i].nascimento.ano);
        printf("Endereço: Cidade: %s | Estado: %s.\n", turma[i].endereco.cidade, turma[i].endereco.estado);
        printf("Notas atuais:\n");
        for (int n = 0; n < QTD_NOTAS; n++)
        {
            printf("%dª nota: %.2f.\n", n + 1, turma[i].notas[n]);
        }
        printf("Média atual: %.2f.\n", turma[i].media);
        if (turma[i].media > 7.0f)
        {
            printf("O aluno está aprovado!\n");
        }
        switch (turma[i].situacao)
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
        printf("Seguindo...\n\n");
    }
    printf("Todos os alunos foram listados.\n\n");
}

int buscarPorMatricula(Aluno turma[], int quantidade, int matricula)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (turma[i].matricula == matricula)
        {
            return i;
        }
    }
    return -1;
}

float calcularMediaTurma(Aluno turma[], int quantidade)
{
    float media_turma = 0;
    for (int i = 0; i < quantidade; i++)
    {
        media_turma += turma[i].media;
    }
    return (media_turma / quantidade);
}

int localizarMaiorMedia(Aluno turma[], int quantidade)
{
    int maior_media = 0;
    for (int i = 1; i < quantidade; i++)
    {
        if (turma[i].media > turma[maior_media].media)
        {
            maior_media = i;
        }
    }
    return maior_media;
}

int contarPorSituacao(Aluno turma[], int quantidade, SituacaoAluno situacao)
{
    int contador = 0;

    for (int i = 0; i < quantidade; i++)
    {
        if (turma[i].situacao == situacao)
        {
            contador++;
        }
    }
    return contador;
}

void listarPorSituacao(Aluno turma[], int quantidade, SituacaoAluno situacao)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (turma[i].situacao == situacao)
        {
            imprimirAluno(turma[i]);
        }
    }
    printf("\nTodos alunos listados!\n");
}

void listarAprovados(Aluno turma[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (turma[i].media >= 7.0f)
        {
            if (turma[i].situacao == MATRICULADO)
            {
                imprimirAluno(turma[i]);
            }
        }
    }
    printf("Todos alunos aprovados listados!\n");
}

int main()
{
    int qtd_alunos = 0;
    struct Aluno aluno[MAX_ALUNOS];
    Aluno *pAluno = aluno;
    SituacaoAluno situacao;
    int opcao_menu;

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

        int repetida;
        do
        {
            repetida = 0;
            printf("Informe a matrícula do %dº aluno: ", i + 1);
            scanf("%d", &pAluno[i].matricula);
            limparBuffer();

            for (int j = 0; j < i; j++)
            {
                if (pAluno[j].matricula == pAluno[i].matricula)
                {
                    printf("Erro: Número de matrícula já cadastrado!\n");
                    repetida = 1;
                    break;
                }
            }
        } while (repetida == 1);

        do
        {
            printf("Digite o nome do aluno: ");
            fgets((pAluno[i]).nome, sizeof((pAluno[i]).nome), stdin);
            (pAluno[i]).nome[strcspn((pAluno[i]).nome, "\n")] = '\0';
            if (strlen(pAluno[i].nome) == 0)
            {
                printf("Erro: Nome do aluno não pode estar em branco!\n");
            }
        } while (strlen(pAluno[i].nome) == 0);

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

        do
        {
            printf("Cidade em que reside: ");
            fgets((pAluno[i]).endereco.cidade, sizeof((pAluno[i]).endereco.cidade), stdin);
            (pAluno[i]).endereco.cidade[strcspn((pAluno[i]).endereco.cidade, "\n")] = '\0';
            if (strlen(pAluno[i].endereco.cidade) == 0)
            {
                printf("Erro: Cidade não pode estar em branco!\n");
            }
        } while (strlen(pAluno[i].endereco.cidade) == 0);

        do
        {
            printf("Sigla do Estado em que reside: ");
            fgets((pAluno[i].endereco.estado), sizeof(pAluno[i].endereco.estado), stdin);
            (pAluno[i]).endereco.estado[strcspn((pAluno[i].endereco.estado), "\n")] = '\0';
            if (strlen(pAluno[i].endereco.estado) == 0)
            {
                printf("Erro: Estado não pode estar em branco!\n");
            }
            else if (strlen(pAluno[i].endereco.estado) != 2)
            {
                printf("Erro: Deve ser inserido a sigla do estado!\n");
            }
        } while ((strlen(pAluno[i].endereco.estado) == 0) || (strlen(pAluno[i].endereco.estado) != 2));

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
        pAluno[i].situacao = situacao;

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
        printf("Aluno cadastrado com sucesso!\n");
        printf("Seguindo...\n\n");
    }
    printf("Todos os alunos foram cadastrados!\n\n");
    do
    {
        do
        {
            printf("\nO que deseja realizar?\n");
            printf("1 - Listar turma\n");
            printf("2 - Pesquisar matrícula\n");
            printf("3 - Exibir estatísticas\n");
            printf("4 - Filtrar por situação\n");
            printf("5 - Listar aprovados\n");
            printf("6 - Aplicar ponto extra\n");
            printf("0 - Encerrar\n");
            printf("Sua escolha: ");
            scanf("%d", &opcao_menu);
            if (opcao_menu < 0 || opcao_menu > 6)
            {
                printf("Erro: Opção inválida!\n");
            }
        } while (opcao_menu < 0 || opcao_menu > 6);
        limparBuffer();

        switch (opcao_menu)
        {
        case 0:
            printf("Saindo...\n");
            return 0;
            break;
        case 1:
            printf("\n");
            imprimirTurma(pAluno, qtd_alunos);
            break;
        case 2:
            int matricula_temp;
            int achou;
            printf("\n=== BUSCAR MATRÍCULA ===\n");
            printf("Informe a matrícula que deseja localizar: ");
            scanf("%d", &matricula_temp);
            achou = buscarPorMatricula(pAluno, qtd_alunos, matricula_temp);
            if (achou == -1)
            {
                printf("Aluno não localizado!\n");
            }
            else
            {
                printf("Aluno localizado!\n");
                imprimirAluno(pAluno[achou]);
            }
            break;
        case 3:
            float media_turma = calcularMediaTurma(pAluno, qtd_alunos);
            int maior_media = localizarMaiorMedia(pAluno, qtd_alunos);
            int matriculados = contarPorSituacao(pAluno, qtd_alunos, MATRICULADO);
            int trancados = contarPorSituacao(pAluno, qtd_alunos, TRANCADO);
            int formados = contarPorSituacao(pAluno, qtd_alunos, FORMADO);
            printf("\n=== ESTATÍSTICAS ===\n");
            printf("Média da turma: %.2f.\n", media_turma);
            printf("Aluno com a maior média:\n");
            imprimirAluno(pAluno[maior_media]);
            printf("Alunos matriculados: %d.\n", matriculados);
            printf("Alunos trancados: %d.\n", trancados);
            printf("Alunos formados: %d.\n", formados);
            break;
        case 4:
            int situacao_temp;
            do
            {
                printf("\n=== FILTRAGEM POR SITUAÇÃO ===\n");
                printf("1 - Matriculados.\n");
                printf("2 - Trancados.\n");
                printf("3 - Formados.\n");
                printf("Sua escolha: ");
                scanf("%d", &situacao_temp);
                if (situacao_temp < MATRICULADO || situacao_temp > FORMADO)
                {
                    printf("Erro: Opção inválida!\n");
                }
            } while (situacao_temp < MATRICULADO || situacao_temp > FORMADO);
            limparBuffer();
            int teste_situacao = contarPorSituacao(pAluno, qtd_alunos, situacao_temp);
            if (teste_situacao == 0)
            {
                printf("Nenhum aluno nesta situação!\n");
            }
            listarPorSituacao(pAluno, qtd_alunos, situacao_temp);
            break;
        case 5:
            printf("\n=== LISTAGEM DE APROVADOS ===\n");
            listarAprovados(pAluno, qtd_alunos);
            break;
        case 6:
            int matr_temp;
            float valor_desejado;
            int aluno_desejado = 0;
            printf("\n=== APLICAR PONTO EXTRA ===\n");
            do
            {
                printf("Informe a matrícula do estudante desejado: ");
                scanf("%d", &matr_temp);
                limparBuffer();
                aluno_desejado = buscarPorMatricula(pAluno, qtd_alunos, matr_temp);
                if (aluno_desejado == -1)
                {
                    printf("Erro: Estudante não encontrado!\n");
                }
            } while (aluno_desejado == -1);
            Aluno *pDesejado = &pAluno[aluno_desejado];

            printf("Qual valor deseja acrescer as notas do estudante: %s?\n", (*pDesejado).nome);
            for (int i = 0; i < QTD_NOTAS; i++)
            {
                do
                {
                    printf("%dª nota:\n", i + 1);
                    printf("Sua resposta: ");
                    scanf("%f", &valor_desejado);
                    if (valor_desejado < 0.0f || valor_desejado > 10.0f)
                    {
                        printf("O valor deve ser entre 0 e 10.\n");
                    }
                } while (valor_desejado < 0.0f || valor_desejado > 10.0f);
                limparBuffer();
                (*pDesejado).notas[i] += valor_desejado;
                if ((*pDesejado).notas[i] > 10.0f)
                {
                    (*pDesejado).notas[i] = 10.0f;
                }
            }
            (*pDesejado).media = calcularMedia((*pDesejado).notas, QTD_NOTAS);
            printf("A média do aluno é de %.2f.\n", (*pDesejado).media);
            break;
        }
    } while (opcao_menu != 0);
    return 0;
}