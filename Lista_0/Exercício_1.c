#include <stdio.h>
//calcular o perímetro de um triângulo

int main() {
    double base, height, perimeter;
    printf("Digit the triangle base\n");
    scanf("%lf", &base);
    printf("Digit the triangle height\n");
    scanf("%lf", &height);
    perimeter = (base * height)/ 2;
    printf("The triangle perimeter is: %.2lf\n", perimeter);
    return 0;
}