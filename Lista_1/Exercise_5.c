/*Faça um programa para somar os múltiplos de N menores do que 200.*/

#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < 200; i++)
    {
        if (i % n == 0)
        {
            sum += i;
        }
        
    }
    printf("sum = %d\n", sum);
    return 0;
}