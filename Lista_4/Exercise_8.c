/*Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa

região. De cada habitante foram coletados os seguintes dados: altura, idade e cor dos olhos (A-
azuis, V-verdes ou C-castanhos). Faça um programa que leia estes dados e que calcule e mostre:

• a média das idades;
• a maior e a menor altura;
• a quantidade de pessoas de olhos castanhos que possuam idade acima da média
calculada.*/

#include <stdio.h>

#define N 2

typedef struct {
    int idade;
    float altura;
    char cor_olhos;
} hab;

void recebe(hab dados[]){
    for (int i = 0; i < N; i++){
        printf("Idade: ");
        scanf("%d", &dados[i].idade);
        printf("Altura: ");
        scanf("%f", &dados[i].altura);
        printf("Cor dos olhos (A-azuis, V-verdes ou C-castanhos): ");
        scanf(" %c", &dados[i].cor_olhos);
    }
}

void mostre(hab dados[]){
    float m_alto = 0.0, m_baixo = 1000, media_age = 0.0, especiais = 0.0;
    for (int i = 0; i < N; i++)
    {
        media_age += dados[i].idade;
        if (dados[i].altura > m_alto) m_alto = dados[i].altura;
        if (dados[i].altura < m_baixo || i == 0) m_baixo = dados[i].altura;
        if (dados[i].cor_olhos == 'C' && dados[i].idade > media_age) especiais++;
    }
    printf("media %.2f", media_age);
    printf("\nmaior altura %.2f", m_alto);
    printf("\nmenor altura %.2f", m_baixo);
    printf("\nquantidade de pessoas de olhos castanhos que possuem idade acima da média: %.2f", especiais);
}

int main(){
    hab dados[N];
    recebe(dados);
    mostre(dados);
    return 0;
}