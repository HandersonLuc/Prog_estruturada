/*Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit.
C = 5/9 (F-32)*/

#include <stdio.h>

int main(){
    int F, C;
    printf("Quantos graus em Celsius? ");
    scanf("%d", &C);
    F = (C * 1.8) + 32;
    printf("Graus em Fahreinheit: %d", F);
    return 0;
}