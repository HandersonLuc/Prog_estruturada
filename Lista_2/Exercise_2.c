/*Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os
números compreendidos entre eles. Os valores A e B não devem ser considerados no somatório.
Caso A seja maior do que B deve ser enviada uma mensagem para o usuário informando que a
soma não será realizada.*/

#include <stdio.h>

int main(){
    int A, B, sum = 0;
    printf("Enter the value of A and B: ");
    scanf("%d %d", &A, &B);
    if (A>B)
    {
        printf("Sum of numbers between A and B isn't possible.\n");
    }else
    {
        for (int i = A+1; i < B; i++)
        {
            sum +=i;
        }
    }
    printf("Sum of numbers between A and B: %d\n", sum);
    return 0;
}