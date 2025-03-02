/*Faça um programa que leia um número K e escreva os termos da série de Fibonacci menores ou
iguais a K. Faça a validação para que o valor de K seja maior do que 0.*/

#include <stdio.h>

int main(){
    int a = 1,b = 0, target;
    printf("Enter the number K: ");
    scanf("%d", &target);

    while (b <= target)
    {
        int temp;
        printf("%d \n", b);
        temp = a + b;
        b = a ;
        a = temp;
    }
    printf("\n");
    return 0;
}