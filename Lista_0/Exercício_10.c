#include <stdio.h>

int main(){
    int F, C;
    printf("Quantos graus em Celsius? ");
    scanf("%d", &C);
    F = (C * 1.8) + 32;
    printf("Graus em Fahreinheit: %d", F);
    return 0;
}