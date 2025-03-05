/*A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre
salário, idade e número de filhos. Faça um programa que leia os dados de 20 pessoas, e que
calcule e mostre:
• a média de salário da população;
• a média do número de filhos;
• o maior salário.*/

#include <stdio.h>

typedef struct{
    int idade;
    float salario;
    float filhos;
}morador;

#define n 2

int main(){
    morador p[n];
    float media_sal, media_fi, highest_salary = 0.0;
    for (int i = 0; i < n; i++)
    {
        printf("Idade do moradoe %d: ", i +1);
        scanf("%d", &p[i].idade);
        printf("Salario do morado %d: ", i +1);
        scanf("%f", &p[i].salario);
        printf("Filhos do morado %d: ", i +1);
        scanf("%f", &p[i].filhos);
        media_sal += p[i].salario;
        media_fi += p[i].filhos;
        if(p[i].salario > highest_salary){
            highest_salary = p[i].salario;
        }
    }
    media_sal /= n;
    media_fi /= n;
    printf("Media de salario: %.2f\n", media_sal);
    printf("Media de filhos: %.2f\n", media_fi);
    printf("Maior salario: %.2f\n", highest_salary);
    return 0;
}