/*Faça um programa que leia uma lista de números inteiros e
que informe, ao final, quantos números pares e quantos
ímpares fora encontrados. O final da leitura é indicado pelo
número zero.*/
#include <stdio.h>

int main() {
    int num, odd = 0, even = 0;
    printf("Enter the numbers, 0 to finish\n");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0){
            even++;
        } else {
            odd++;
        }
        printf("Digit the numbers, 0 to finish\n");
        scanf("%d", &num);    
    }
    printf("The number of even numbers is: %d\n", even);
    printf("The number of odd numbers is: %d\n", odd);
    printf(":)\n");
    return 0;
}