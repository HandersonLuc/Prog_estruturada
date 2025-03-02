/*A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores. Para isso
ela coletou alguns dados como idade, sexo (M ou F) e salário. Faça um programa que leia estes dados e que escreva ao final:
• a média salarial dos homens
• a média salarial das mulheres
• o maior salário encontrado entre as pessoas abaixo de 30 anos.
Obs: O final da leitura de dados é marcado por uma idade negativa.*/

#include <stdio.h>
#include <string.h>

int main(){
    int age, count_man = 0, count_women = 0; 
    char sex[2]; 
    float salary = 0.0, average_wage_male = 0.0, average_wage_female = 0.0, highest_salary = -1.0; // Begin with a negative wage because the firts salary will be the highest.
    printf("Enter your age: ");
    scanf("%d", &age);

    while (age >= 0)
    {
        printf("Enter your sex M for male and F for female:");
        scanf("%s", sex);

        printf("Enter your salary: ");
        scanf("%f", &salary);
        if (strcmp(sex, "M") == 0)
        {
            count_man++;
            average_wage_male += salary;
        } else if (strcmp(sex, "F")==-0){
            count_women++;
            average_wage_female += salary;
        }else
        {
            continue;
        }
        
        if (age < 30 && salary > highest_salary){
            highest_salary = salary;
        }
        printf("Enter your age: ");
        scanf("%d", &age);
    }
        average_wage_female = average_wage_female / count_women;
        average_wage_male = average_wage_male / count_man;
        printf("Average male salary: %.2f\n", average_wage_male);
        printf("Average female salary: %.2f\n", average_wage_female);
        printf("Biggest salary below 30 years: %.2f\n", highest_salary);
    return 0;
}