/*Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade, e
outro pelo milhar e pela centena, se somarmos estes dois novos números gerando um terceiro, o
quadrado deste terceiro número é exatamente o número original de quatro dígitos.
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica.*/

#include <stdio.h>

int main(){
    int number, p1, p2, s;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    p1 = number / 100; // here we get the thousands and hundreds
    p2 = number % 100; // here we get the tens and units
    s = p1 + p2;
    if (s * s == number)
    {
        printf("The number %d has the characteristic\n", number);
    } else
    {
        printf("The number %d doesn't have the characteristic\n", number);
    }

    return 0;
}