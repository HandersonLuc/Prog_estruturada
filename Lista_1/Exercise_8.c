/*Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo. Caso o segundo número
digitado seja zero, o programa deve informar ao usuário que a operação de divisão é impossível.*/

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    if (b==0)
    {
        printf("The division is impossible\n");
        printf("%d %d %d", a+b, a*b, a-b);
    } else
    {
        printf("%d %d %d %d", a+b, a*b, a/b, a-b); // Note: "a" and "b" are integers, so the division result is an integer.
    }
    return 0;
}