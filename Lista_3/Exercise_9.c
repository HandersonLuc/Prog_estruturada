/*Ler 20 números inteiros e depois imprimí-los na ordem
contrária em que foram lidos.*/

#include <stdio.h>

int main(){
    int vet[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the number for the position %d:", i);
        scanf("%d", &vet[i]);
    }
    for (int i = 19; i > -1; i--)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}