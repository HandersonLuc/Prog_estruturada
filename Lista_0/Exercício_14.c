/*Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os
valores antes e depois da troca.*/
#include <stdio.h>

int main() {
    int A, B;
    //well, i'll use a variable called temp, because i'll only use it one time
    printf("Value of A: ");
    scanf("%d", &A);
    printf("Value of B: ");
    scanf("%d", &B);
    printf("Before the swap: A = %d, B = %d\n", A, B);
    for(int i =0; i<1; i++){
        int temp = A;
        A = B;
        B = temp;
        //i won't use 3 variable, because it'unnecessary. Only 2 permanent variables and one temporary variable already is enough.
    }
    printf("After the swap: A = %d, B = %d\n", A, B);
    return 0;
}