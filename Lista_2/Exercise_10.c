/*Faça um programa que leia uma quantidade não determinada de números inteiros. O programa
deve calcular e escrever a quantidade de números pares e ímpares, a média aritmética dos
números pares e a divisão do somatório dos números pares pelo somatório dos números ímpares.
O número que encerrará a leitura será zero, que não deve ser considerado.*/

// The program will read an undetermined amount of integers. The program will calculate and write the amount of even and odd numbers, the arithmetic average of the even numbers and the division of the sum of the even numbers by the sum of the odd numbers. The number that will end the reading will be zero, which should not be considered.

#include <stdio.h>
int main(){
    int number, sum_odd = 0, sum_pair = 0, m_pair, div_sum, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        if (number % 2 == 0)
        {
            sum_pair += number;
            count++;
        } else
        {
            sum_odd += number;
        }
    printf("Enter a number: ");
    scanf("%d", &number);
    }
    printf("Arithmetic mean of the even numbers: %.2f\n", (float)sum_pair/count);
    printf("The division of the sum of even numbers by sum of odd numbers: %.2f\n", (float)sum_pair/sum_odd);
    return 0;
}