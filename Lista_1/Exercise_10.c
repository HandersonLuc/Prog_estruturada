/*Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua
classificação.
• Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
• Se o preço for maior do que 50 e menor ou igual a 100, o aumento será de 10%
• Se o preço for maior do que 100, o aumento será de 15%
A classificação do produto deve ser:
• Barato: até 80 reais (inclusive)
• Normal: entre 80 reais e 120 reais (inclusive)
• Caro: entre 120 reais e 200 reais (inclusive)
• Muito Caro: maior do que 200 reais*/

#include <stdio.h>

int main (){
    float price;
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    if (price <= 50)
    {
        price = price*1.05;
    }else if (price <= 100)
    {
        price = price * 1.10; 
    }else
    {
        price = price * 1.15;
    }
    printf("%.2f\n", price); //Hera we checked the price after the increase
    if (price < 80)
    {
        printf("Classification: Cheap");
    }else if (price < 120)
    {
        printf("Classification: Normal");
    } else if (price < 200)
    {
        printf("Classification: Expensive");
    } else
    {
        printf("Classification: Very Expensive");
    }
    return 0;
}