/*Faça um programa que leia um conjunto de dados sobre os N alunos de uma turma. Para cada aluno será lido o seu
nome, suas 4 notas e seu ano de ingresso na faculdade. O programa deve calcular a média de cada aluno e indicar o
nome do aluno que obteve a maior média (é possível que existam vários alunos). Deve ser usado um vetor de
estruturas.*/


#include <stdio.h>
#include <string.h>

#define N 3 // Número de alunos, ajuste conforme necessário

typedef struct {
    char nome[50];
    float notas[4];
    int ano_ingresso;
    float media;
} Aluno;

int main() {
    Aluno alunos[N];
    
    le_dados(alunos, N);
    calcula_media(alunos, N);
    encontra_maior_media(alunos, N);
    
    return 0;
}

void le_dados(Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
                
        printf("Digite as 4 notas do aluno %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &alunos[i].notas[j]);
        }
        
        printf("Digite o ano de ingresso do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].ano_ingresso);
        
        getchar(); // Limpa o buffer do teclado
    }
}

void calcula_media(Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        float soma = 0.0;
        for (int j = 0; j < 4; j++) {
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / 4;
    }
}

void encontra_maior_media(Aluno alunos[], int n) {
    float maior_media = alunos[0].media;
    for (int i = 1; i < n; i++) {
        if (alunos[i].media > maior_media) {
            maior_media = alunos[i].media;
        }
    }
    
    printf("Alunos com a maior média (%.2f):\n", maior_media);
    for (int i = 0; i < n; i++) {
        if (alunos[i].media == maior_media) {
            printf("%s\n", alunos[i].nome);
        }
    }
}