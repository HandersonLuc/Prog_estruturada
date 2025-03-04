/*Faça um programa que leia os N salários dos funcionários de uma empresa.
Calcule a média salarial da empresa e escreva a quantidade de funcionários que
possuem salário acima da média.*/

#include <stdio.h>

#define N 3

float preenche(int vet[], int n){
    float media = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Digite o salario do %d funcionario: ", i + 1);
        scanf("%d", &vet[i]);
        media += vet[i];
    }
    media /= N;
    int acima_media = 0;
    for (int i = 0; i < N; i++){
        if (vet[i] > media)
            acima_media++;
    }
    printf("A quantidade de funcionarios com salario acima da media e: %d\n", acima_media);
    return media;
}

int main(){
    int vet[N];
    printf("A media salarial is: %.2f",preenche(vet, N));
    return 0;
}