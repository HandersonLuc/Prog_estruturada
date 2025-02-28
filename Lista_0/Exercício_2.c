#include <stdio.h>

int main(){
    char nome [100];
    double valor;
    double gasto;
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite o consumo mensal (em kWh):\n");
    scanf("%lf",&gasto);
    printf("Digite o valor do kWh:\n");
    scanf("%lf",&valor);
    double total = gasto * valor;
    printf("Ola %s, voce gastou %.2lf reais\n",nome,total);
    return 0;
}