/*Preencher 2 vetores de X posições cada, com números
inteiros. Fazer uma função que receba os dois vetores
como parâmetros e que retorne a quantidade de posições
que possuem números distintos.*/

#include <stdio.h>

#define max 4

int verifica(int *vet1, int *vet2, int num){
    int same = 0;
    for (int i = 0; i < num; i++)
    {
        if (vet1[i] == vet2[i])
        {
            same++;
        }else
            continue;
    }
    return same;}


int main(){
    int vet1[max], vet2[max];
    for (int i = 0; i < max; i++)
    {
        printf("Enter the value to position %d for vat1 vet2: ", i);
        scanf("%d %d", &vet1[i], &vet2[i]);
    }
    printf("A quantidade de posições com valores iguais is: %d", verifica(vet1, vet2, max));
    return 0;
}