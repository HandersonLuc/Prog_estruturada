/*Faça um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome
do produto mais caro. Considere que o final da lista é marcado pelo produto ‘XXX’ e que não
existem preços repetidos.*/

#include <stdio.h>
#include <string.h> // This library is necessary to use the function strcpy
int main(){
    char product[100], expensive_product[100];
    float price, expensive_price = -1.0;
    printf("Enter the product name: ");
    scanf("%s", product);
    while (strcmp(product, "XXX")== 1)
    {
        printf("Price of the product: ");
        scanf("%f", &price);
        if (price > expensive_price)
        {
            strcpy(expensive_product, product); // the function strcpy will copy the string product to expensive_product
        }
        printf("Enter the product name: ");
        scanf("%s", product);
    }
    printf("The most expensive product is: %s\n", expensive_product);

    return 0;
}