/*Faça um programa que leia N valores em dólar e que
transforme para real. Deve ser feita uma função que
receba o valor em dólar, a cotação e retorne o
equivalente em real.*/

#include <stdio.h>

float convert(float A, float cot){
    return (A * cot);
}

int main(){
    float N, cot;
    printf("Digite o numero de valores em dolar: ");
    scanf("%f", &N);
    printf("Digite a cotacao em real: "); // quantos reais eu consigo com certa quantidade de dolares
    scanf("%f", &cot);
    printf("O queivalente em real e: %.2f", convert(N, cot));
    return 0;
}