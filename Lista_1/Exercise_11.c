/*Faça um programa que leia a altura e o sexo de uma pessoa e escreva o seu peso ideal, utilizando as
seguintes fórmulas:
• para homens: (72,7 * altura) – 58,0
• para mulheres: (62,1 * altura) – 44,7*/

#include <stdio.h>

int main(){
    float height, sex, ideal_weight;
    printf("Are you a man(1) or a women(2) ?\n"); //I could veriry using a string, but I don't know how to do this right now... :(
    scanf("%f", &sex);
    printf("Enter your height: ");
    scanf("%f", &height);
    if (sex == 1)
    {
        ideal_weight = (72.7 * height) - 58.0;
        printf("Your ideal weight is %.2f kg.\n", ideal_weight);
    } else // Well, if sex isn't 1, it shoulde be 2
    {
        ideal_weight = (62.1 * height) - 44.7;
        printf("Your ideal weight is %.2f kg.\n", ideal_weight);
    }
    return 0;
}