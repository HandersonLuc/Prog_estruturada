#include <stdio.h>
int  main (){
    float salary, salary_real;
    printf("digit the salary: \n");
    scanf("%f", &salary);
    salary_real = salary * 0.90;
    printf("The real salary is: %.2f\n", salary_real);
    return 0;
}