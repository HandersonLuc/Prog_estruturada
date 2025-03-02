/*Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados por uma
empresa. Ao final deve ser escrito o total gasto pela empresa.*/

#include <stdio.h>

int main(){
    float total, price;
    int quantity;
    for (int i = 0; i < 50; i++)
    {
        printf("Enter the quantity and the price %d: ", i + 1);
        scanf("%d %f", &quantity, &price);
        total += quantity * price;
    }
    printf("Total: %f\n", total);
    return 0;
}