#include <stdio.h>

int main(){

    float salario, conta_1, conta_2, Total;
    printf("valor de seu salario:");
    scanf("%f", &salario);
    printf("Valor da conta 1:");
    scanf("%f", &conta_1);
    printf("Valor da conta 2:");
    scanf("%f", &conta_2);
    Total = salario - ( conta_1 * 1.02) - (conta_2 * 1.02);
    printf("Ao terminar de pagar suas contas a pessoa tera ainda um total de R$ %.2f\n", Total);
    return 0;
}