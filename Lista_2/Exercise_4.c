/*Faça um programa que apresente a tabuada de um número N, que será informado pelo usuário. O
programa deve garantir que o valor digitado para N esteja entre 0 e 9.*/

#include <stdio.h>

int main(){
    int n, i;
    printf("Enter the number that you want to know the multiplication table: ");
    scanf("%d", &n);
    if (0<n<9)
    {
        for ( i = 1; i < 11; i++)
        {
            printf("%d\n", i * n);
        }
    }else
    {
        printf("The number must be between 0 and 9.\n");
    }
    return 0;
}