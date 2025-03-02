/*Em um cinema, cada espectador respondeu a uma pesquisa, que perguntava a sua idade e a sua
opinião em relação a um filme (O – Ótimo; B – Bom; R – Regular; P – Péssimo). Faça um programa
que informe a média de idade das pessoas que responderam o questionário e a porcentagem dada
para cada uma das respostas. O programa deve terminar quando o usuário digitar uma idade
negativa.*/

#include <stdio.h>
#include <string.h> // include library for string comparison

int main(){

    float age, sum_ages = 0, ot = 0, bo = 0, reg = 0, pes = 0, total_expectations = 0;
    char op[2];
    printf("Enter your age: ");
    scanf("%f",&age);
    
    while (age >= 0) // i include zero because it is poditive
    {
        printf("Enter your opinion (O/B/R/P): ");
        scanf("%s", op);
        sum_ages += age;        
        if (strcmp(op, "O") == 0) // The function strcmp checks if the strings are equal --> strcmp(A,B) if A == B returns 0, else returns 1
        {
            ot +=1;
            total_expectations++;
        }else if (strcmp(op, "B") == 0){
            bo +=1;
            total_expectations++;
        }else if (strcmp(op, "R") ==0)
        {
            reg +=1;
            total_expectations++;
        }else if (strcmp(op, "P") == 0)
        {
            pes +=1;
            total_expectations++;
        }else
        {
            printf("Invalid option\n");
        }
        printf("Enter your age: ");
        scanf("%f",&age);
    } //Here I have a problem, because if the first age is negative then this code will fail, so to resolve this problem I'll use a condicion.
    if (total_expectations > 0)
    {
    printf("average age is: %.2f \n", sum_ages/total_expectations);
    printf("average of otimo: %.2f % \n", (ot/total_expectations)* 100);
    printf("average of bom: %.2f % \n", (bo/total_expectations)* 100);
    printf("average of regular: %.2f % \n", (reg/total_expectations)* 100);
    printf("average of péssimo: %.2f % \n", (pes/total_expectations)* 100);
    } else{
        printf("No data available.\n");
    }
    return 0;
}