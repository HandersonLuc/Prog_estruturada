/*Faça um programa que calcule o valor total que um edifício garagem arrecadou em um dia de
operação, no qual 200 carros utilizaram o estacionamento. O algoritmo deve ler o horário de
entrada (hora e minuto) assim como o de saída. Sabe-se que o valor mínimo cobrado é de 4 reais
por um período 2 horas. A partir daí, cobra-se 1 real por hora adicional.*/

#include <stdio.h>

int main(){
    int hours_enter, minutes_enter, hours_exit, minutes_exit, total_minutes, tax, total_tax = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the hours and minutes that car number %d entered: ",i);
        scanf("%d:%d", &hours_enter, &minutes_enter);
        printf("Now entered the hours and minutes that car number %d left: ",i);
        scanf("%d:%d", &hours_exit, &minutes_exit);
        total_minutes = (hours_exit - hours_enter) * 60 + (minutes_exit - minutes_enter);
        if (total_minutes <= 120)
        {
            tax = 4;
        }else
        {
            tax = 4 + ((total_minutes -120 + 59)/60); //around ;
        }
        printf("The car number %d must pay: %d\n", i, tax);
        total_tax += tax;
    }
    printf("The total amount collected is: %d\n", total_tax);
    return 0;
}