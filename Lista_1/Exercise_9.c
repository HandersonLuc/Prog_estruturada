/*Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo
as regras:
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Máster: A partir de 18 anos*/

#include <stdio.h>

int main(){
    int age;
    printf("Enter the age of the swimmer\n");
    scanf("%d", &age);
    if (age <= 4)
    {
        printf("Category baby\n");
    } else if(age <=10)
    {
        printf("Category Infantil\n");
    } else if( age <=17)
    {
        printf("category juvenil");
    } else
    {
        printf("Category master");
    }
        return 0;
}