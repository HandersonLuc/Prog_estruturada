/*Faça um programa que leia a quantidade de horas aula dadas por dois professores e o valor por
hora recebido por cada um. Mostrar na tela qual dos professores tem salário total maior.*/

#include <stdio.h>



int main(){
    float t1, t2, v1, v2, s1, s2;
    printf("Enter the number of hours taught by the first teacher and how much they receive per hour: ");
    scanf("%f %f", &t1, &v1);
    printf("Enter the number of hours taught by the second teacher and how much they receive per hour: ");
    scanf("%f %f", &t2, &v2);
    s1 = t1 * v1;
    s2 = t2 * v2;
    if(s1 > s2){
        printf("The first teacher has a higher salary: %.2f\n", s1);
    }else
        {
            printf("The second teacher has a higher salary: %.2f\n", s2);
        }
        
    return 0;
}