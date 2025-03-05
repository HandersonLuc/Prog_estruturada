/*Faça um programa que leia uma cadeia de
caracteres em formato de data: DD/MM/AAAA

 Crie uma função que receba esta data como parâmetro e
que retorne o dia, o mês e o ano em três variáveis inteiras
distintas. Escreva os valores retornados no programa
principal.*/

#include <stdio.h>

int preenche(char *data,int *dia, int * mes, int *ano){  //  Por referência
    sscanf(data, "%d/%d/%d", dia, mes, ano); 
}

int main(){
    char data[12];
    int dia, mes, ano;
    printf("Enter data: DD/MM/YYYY: ");
    scanf("%s", data);
    preenche(data, &dia, &mes, &ano);
    printf("Dia: %d\nMes: %d\nAno: %d\n", dia, mes, ano);
    return 0;
}