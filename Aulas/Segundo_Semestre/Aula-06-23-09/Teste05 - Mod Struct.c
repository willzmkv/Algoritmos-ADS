#include <stdio.h>

typedef struct
{
    int matricula;
    float media;
} Aluno;

void atualizarMedia(Aluno *aluno, float novaMedia)
{
    if (aluno != NULL)
    {
        aluno->media = novaMedia;
    }
}

void exibirAluno(const Aluno *aluno)
{
    if (aluno != NULL)
    {
        printf("Matricula: %d\n", aluno->matricula);
        printf("Media: %.1f\n", aluno->media);
    }
}
int main(void)
{
    Aluno aluno = {2026001, 7.5f};
    atualizarMedia(&aluno, 9.0f);
    exibirAluno(&aluno);
    return 0;
}