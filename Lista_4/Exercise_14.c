/*
Uma empresa que comercializa produtos alimentícios controla seu estoque diariamente. Faça um programa que leia a
quantidade de estoque diário do mês passado e que calcule a média mensal em estoque. Determine também o maior e
menor estoque lidos.
*/


/*
Uma empresa que comercializa produtos alimentícios controla seu estoque diariamente. Faça um programa que leia a
quantidade de estoque diário do mês passado e que calcule a média mensal em estoque. Determine também o maior e
menor estoque lidos.
*/

#include <stdio.h>

#define DIAS_NO_MES 30

int main() {
    int estoque[DIAS_NO_MES];
    
    le_estoque(estoque, DIAS_NO_MES);
    
    float media = calcula_media(estoque, DIAS_NO_MES);
    int maior = encontra_maior(estoque, DIAS_NO_MES);
    int menor = encontra_menor(estoque, DIAS_NO_MES);
    
    printf("Média mensal em estoque: %.2f\n", media);
    printf("Maior estoque lido: %d\n", maior);
    printf("Menor estoque lido: %d\n", menor);
    
    return 0;
}

void le_estoque(int estoque[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite a quantidade de estoque do dia %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }
}

float calcula_media(int estoque[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += estoque[i];
    }
    return (float)soma / n;
}

int encontra_maior(int estoque[], int n) {
    int maior = estoque[0];
    for (int i = 1; i < n; i++) {
        if (estoque[i] > maior) {
            maior = estoque[i];
        }
    }
    return maior;
}

int encontra_menor(int estoque[], int n) {
    int menor = estoque[0];
    for (int i = 1; i < n; i++) {
        if (estoque[i] < menor) {
            menor = estoque[i];
        }
    }
    return menor;
}