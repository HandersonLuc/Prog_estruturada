/*Faça uma função que some os números inteiros positivos
compreendidos entre A e B. Considere que A < B e que A e B
devem entrar na soma.*/

#include <stdio.h>

int sum(int A, int B){
    if (A+1 == B)
    {
        return A;
    }else
    {
        return A + sum(A+1, B);
    }
}

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("The sum of number betweeen a and b is: %d\n", sum(a,b));
    return 0;
}