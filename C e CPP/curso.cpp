// codigo para achar os alunos de um determinado curso
#include <stdio.h>
#include <string.h>

struct tAluno
{

    int mat;
    char nome[31], curso[31];
};

int main()
{

    tAluno alunos[5], aux;

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf("%d", &alunos[i].mat);
        fflush(stdin);
        scanf(" %[^\n]s", alunos[i].nome);
        fflush(stdin);
        scanf(" %[^\n]s", alunos[i].curso);
        fflush(stdin);
    }
    fflush(stdin);
    scanf(" %[^\n]s", aux.curso);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(alunos[i].curso, aux.curso) == 0)
        {
          printf("%d %s\n", alunos[i].mat, alunos[i].nome);  
        }
    }
}