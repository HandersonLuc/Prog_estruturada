/*O síndico do condomínio Praias Oceânicas, que possui 4 blocos, instituiu uma nova forma de
cobrança. Os condôminos dos blocos Itaipu e Itacoatiara pagam 10% a mais que os moradores dos
blocos Camboinhas e Piratininga. Os moradores da cobertura pagam uma taxa extra fixa relativa a
1% do total do condomínio. Supondo que cada bloco possui 20 apartamentos simples e 4 coberturas,
faça um programa que leia a taxa condominial básica e que informe o total arrecadado pelo síndico
no mês, especificando também os valores diferenciados de cada condomínio.*/


/* SEPARANDO DADOS
TAXA DE ITAIPU E ITACOATIARA = 1.10 * TAXA CAMBONHAS E PIRATININGA
COBERTURA = 0.01 * CONDOMÍNIO */
#include <stdio.h>

int main(){
    int apart =20, cobertura = 4;
    float basic_tax, i_i_tax, total, cob_tax;
    printf("Enter the basic condo fee: ");
    scanf("%f", &basic_tax);
    i_i_tax = 1.10 * basic_tax;
    cob_tax = 0.01 * (4 * basic_tax);
    total = (apart * basic_tax) + (apart * i_i_tax) + (cobertura * cob_tax);
    printf("Total collected by the condo association: $%.2f\n", total);
    return 0;
}