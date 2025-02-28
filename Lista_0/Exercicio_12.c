/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e
escrever a idade dessa pessoa em anos, meses e semanas.*/

#include <stdio.h>

int main() {
    int Ano_de_nascimento, ano_atual = 2025,dif_y, dif_m, dif_s;
    printf("ano de nascimento: ");
    scanf("%d", &Ano_de_nascimento);
    dif_y = ano_atual - Ano_de_nascimento;
    dif_m = dif_y * 12;
    dif_s = dif_m * 4; 
    printf("%d anos, %d meses, %d semanas\n", dif_y,dif_m,dif_s);
    return 0;
}