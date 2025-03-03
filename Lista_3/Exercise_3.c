/*Faça um programa que leia dois números inteiros
positivos, X e Y e que calcule e escreva X^Y. Deve ser
criada uma função para o cálculo da potência.*/
#include <stdio.h>

int pot( int x, int y){
    int result =1;
    for (int i = 0; i < y; i++)
    {
        result *= x; 
    }
    return result;
}

int main(){
    int x, y;
    printf("Value to X and Y : ");
    scanf("%d %d", &x, &y);
    printf("Result of pow X^Y is equal: %d \n", pot(x, y));
    return 0;
}