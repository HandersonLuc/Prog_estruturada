/*Faça uma função que calcule X^n, sendo N ≥ 0.*/


#include <stdio.h>

int pot(int x, int n){
    if (n == 0)
    {
        return 1;
    }else
    {
        return (x * (pot(x, n -1)));
    }
}

int main(){
    int x,n;
    printf("Enter the value of X and n: ");
    scanf("%d %d", &x, &n);
    printf("The result of x^n is: %d\n", pot(x,n));
    return 0;
}