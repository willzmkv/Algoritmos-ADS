#include <stdio.h>
#include <string.h>

typedef struct
{

    int matricula;
    char nome[50];
    float media;

} Aluno;

int main(void)
{

    Aluno aluno;
    Aluno *pAluno = &aluno;

    printf("Digite o nome do aluno: ");
    fgets((*pAluno).nome, sizeof((*pAluno).nome), stdin);
    (*pAluno).nome[strcspn((*pAluno).nome, "\n")] = '\0';

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &(*pAluno).matricula);

    printf("Digite a média do aluno: ");
    scanf("%f", &(*pAluno).media);

    printf("Matrícula do aluno: [%d]\n", (*pAluno).matricula);

    printf("Nome do aluno: [%s]\n", (*pAluno).nome);

    printf("Média do aluno: [%.2f]\n", (*pAluno).media);

    (*pAluno).media = 9.9;

    printf("A nova média do aluno ficou em: [%.2f]", (*pAluno).media);

    return 0;
}