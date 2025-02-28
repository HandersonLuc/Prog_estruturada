#include <stdio.h>

int main(){
    int hora;
    int minuto;
    printf("hora:\n");
    scanf("%d", &hora);
    printf("minuto:\n");
    scanf("%d", &minuto);
    int convert = hora * 60 + minuto;
    printf("O total de minutos e : %d\n", convert);
    return 0;
}