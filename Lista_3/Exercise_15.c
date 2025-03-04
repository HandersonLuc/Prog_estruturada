/*Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e
imprima, após a entrada de todos os dados, os nomes dos alunos aprovados.
Considere que a média para aprovação é 6,0.*/

#include <stdio.h>
#include <string.h>

#define num 3

typedef struct{
    char nome[20];
    float nota;
} Aluno;

int aprovados( Aluno alunos[], int n);

int main(){
    Aluno alunos[num];
    for (int i = 0; i < num; i++)
    {
        printf("Nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota);
    }
    printf("O total de aprovados is: %d\n", aprovados(alunos, num));
    
    return 0;
}

int aprovados(Aluno alunos[], int n){
    int aprovados = 0;
    for (int i = 0; i < n; i++)
    {
        if (alunos[i].nota >= 6.0)
        {
            aprovados++;
            printf("%s\n", alunos[i].nome);
        }
    return aprovados;
    }
}