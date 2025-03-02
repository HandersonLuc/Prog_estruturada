/*Faça um programa que apresente o peso total que será carregado por um caminhão. Sabe-se que
este caminhão carrega 25 caixas. O peso de cada uma das caixas será informado pelo usuário.*/

#include <stdio.h>

int main() {
    float weight, numbers_of_boxes =25.0, weight_total = 0.0;
    for( int i = 0; i < 25; i++){
        printf("Enter the weight of box %d: ", i+1);
        scanf("%f", &weight);
        weight_total += weight;
    }
    printf("The total weight is: %.2f\n", weight_total);
    return 0;
}