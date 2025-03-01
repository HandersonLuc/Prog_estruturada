/*Calcular o salário de um funcionário sabendo que ele foi contratado por
1000 reais em 1995 e que no ano seguinte recebeu um aumento de 0.1%,
A partir daí, em cada ano o funcionário recebeu um percentual de aumento
do dobro do ano anterior.*/

#include <stdio.h>

//2025 - 1995 = 30 anos ;)
int main(){
    double salary = 1000.0, tax = 0.001;
    for (int i = 1; i <= 30; i++){
        salary += salary * tax;
        tax *= 2.0;
    }
    printf("The salary in 2025 is %.2f \n", salary);
    return 0;
}