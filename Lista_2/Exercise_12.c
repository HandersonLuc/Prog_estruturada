/*Faça um programa que calcule o valor de E segundo a expressão abaixo:
E = 2^1 + 2^2 + 2^3 + ... + 2^N-1 + 2N*/

#include <stdio.h>
#include <math.h> // import library to 

int main() {
    int N, i;
    double E = 0;

    printf("Enter the positive number N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        E += pow(2, i); // Function to calculate e
    }
    printf("The value of E is: %.2f\n", E);
    return 0;
} 