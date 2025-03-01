/*Faça um programa que leia 3 valores reais e que informe se eles formam um triângulo. Caso seja
possível formar o triângulo indique se este é equilátero, isósceles ou escaleno.*/

#include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter the three sides of the triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) // triangle ?
    {
        if (a == b && b == c)
            printf("The triangle is equilateral\n");
        else if (a == b || b == c || a == c)
            printf("The triangle is isosceles\n");
        else
            printf("The triangle is escaleno\n");
    } else{
        printf("The triangle cannot be formed with the given sides\n");}
    return 0;
}