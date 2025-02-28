/*Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule
e mostre a hora convertida em minutos e em segundos.*/

#include <stdio.h>

int main(){
    int hora;
    int minuto;
    printf("hora:\n");
    scanf("%d", &hora);
    printf("minuto:\n");
    scanf("%d", &minuto);
    int convert = hora * 60 + minuto;
    int seg = convert * 60;
    printf("O total de minutos e : %d\n O total de segundos e: %d\n", convert, seg);
    return 0;
}