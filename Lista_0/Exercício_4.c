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