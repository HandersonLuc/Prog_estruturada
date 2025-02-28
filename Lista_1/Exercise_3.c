/*Faça um programa para calcule o fatorial de N.*/
#include <stdio.h>

int main() {
    int n, fat = 1;
    printf("Which number do you want to calculate the factorial?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fat *= (i + 1);
    }
    printf("Factrial of %d is %d\n", n, fat);
    return 0;
}