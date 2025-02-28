/*Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas.*/

#include <stdio.h>

int main(){
    float nota_1, nota_2, nota_3;
    printf("Nota 1: ");
    scanf("%f", &nota_1);
    printf("Nota 2: ");
    scanf("%f", &nota_2);
    printf("Nota 3: ");
    scanf("%f", &nota_3);
    float media = (nota_1 + nota_2 + nota_3) / 3;
    printf("A media das notas e %.2f\n", media);
    return 0;
}