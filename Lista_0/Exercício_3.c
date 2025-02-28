# include <stdio.h>
int main() {
    
    float min_wage;
    float kilowat_price;
    float gasto;
    printf("Digite o salario minimo: \n");
    scanf("%f", &min_wage);
    kilowat_price = min_wage/10.0;
    printf("Digite quantos kilowats foram gastados; \n");
    scanf("%f", &gasto);
    printf(" O valor de um kilowat e %.2f reais e o valor da conta de energia do usuario foi de %.2f reais.\n", kilowat_price, kilowat_price*gasto);
    return 0;
}