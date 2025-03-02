/*Faça um programa que calcule a área total de uma casa (sala, cozinha, quartos, banheiros, etc).
Considere que todos os cômodos são retangulares. O usuário deve entrar com a largura e o
comprimento de cada cômodo da casa. O final da leitura será detectado quando for digitado um
número negativo.*/

#include <stdio.h>

int main (){
    float width, length, area = 0.0, total_area = 0.0;
    printf("Enter width and lenght: ");
    scanf("%f %f", &width, &length);
    while (width > 0 && length > 0)
    {
        area = width * length;
        printf("Area: %.2f square meters\n", area);
        printf("Enter width and lenght: ");
        scanf("%f %f", &width, &length);
        total_area += area;
    }
    printf("Total area: %.2f square meters\n", total_area);
    return 0;
}