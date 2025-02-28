/*Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e
escreva a média ponderada dessas notas.*/

#include <stdio.h>

int main(){

    float nota, peso, soma_notas_ponderadas = 0, soma_pesos = 0;
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i +1);
        scanf("%f", &nota);
        printf("Digite o peso da nota %d: ", i+1);
        scanf("%f", &peso);
        soma_notas_ponderadas += nota * peso;
        soma_pesos += peso;}
    
    float media_ponderada = soma_notas_ponderadas / soma_pesos;
    printf("A media ponderada das notas e: %.2f\n", media_ponderada);

    return 0;
}