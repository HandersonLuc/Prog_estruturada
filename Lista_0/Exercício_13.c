/*Faça um programa que leia dois números inteiros não nulos e que calcule e mostre a soma e a
multiplicação dos dois números e a divisão e a subtração do primeiro pelo segundo.*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("soma = %d, produto = %d, divisao = %d, subtracao = %d\n", num1+num2, num1 * num2, num1/num2, num1 - num2);
    //o enunciado pede para considerar a entrada de dois números interos, porém na linguagem C a divisão de dois inteiros vai dar um inteiro também, por isso o resultado vai sair, na maioria dos casos, matematicamente errado
    return 0;
}