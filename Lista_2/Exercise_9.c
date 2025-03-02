/*Faça um programa que escreva os N primeiros termos de uma PA. O primeiro termo, a1, e a
razão da PA devem ser lidos.*/

#include <stdio.h>

int main(){
    int target, a1, r;
    printf("Enter the value for the number of terms: ");
    scanf("%d", &target);
    printf("Enter the value for the first term: ");
    scanf("%d", &a1);
    printf("Enter the value for the reason: ");
    scanf("%d", &r);
    for (int i = 0; i < target; i++)
    {
        printf("%d ", a1 + (r * i));
    }
    return 0;
}