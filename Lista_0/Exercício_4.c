/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um
programa que receba o valor do salário fixo do funcionário, o valor das suas vendas e que calcule
e mostre o salário final do funcionário.*/

#include <stdio.h>
int main(){
    float wage_fix;
    float comi;
    printf("Salario fixo:\n");
    scanf("%f", &wage_fix);
    printf("Comissao:\n");
    scanf("%f", &comi);
    float Total = wage_fix + (comi * 0.04);
    printf("O funcionário recebera no total: R$ %.2f", Total);    
    return 0;
}