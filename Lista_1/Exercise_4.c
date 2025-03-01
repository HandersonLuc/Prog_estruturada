/*EXERCÍCIO DO-WHILE Fazer um programa que escreva a série de Fibonnacci, cujo
último termo seja menor ou igual a N. Obrigar o usuário a
digitar um valor positivo para N.*/

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    do {
        printf("Digite um valor positivo para N: ");
        scanf("%d", &n);
    } while (n <= 0);   // only positive numbers
    printf("%d ", a);   // First number
    while (b <= n) {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
