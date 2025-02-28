/*Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e
escrever quantos salários mínimos ganha o funcionário.*/

#include <stdio.h>

int main(){
    float salary, minimun_wage, relacao;
    printf("Digite o salario: \n");
    scanf("%f", &salary);
    printf("digite o salario minimo: \n");
    scanf("%f", &minimun_wage);
    relacao = salary/minimun_wage;
    printf("O salario e %.2f vezes o salario minimo\n", relacao);
    return 0;
}