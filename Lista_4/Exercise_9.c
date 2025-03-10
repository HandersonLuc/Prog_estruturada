/*Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são
números que têm o mesmo valor se lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232,
1661, etc. O final da leitura é indicado por um número negativo. Faça uma função que irá retornar para o programa
principal se o número é palíndromo ou não.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Digite um número inteiro (negativo para sair): ");
    scanf("%d", &num);

    while (num >= 0) {
        if (eh_palindromo(num)) {
            printf("%d é um número palíndromo.\n", num);
        } else {
            printf("%d não é um número palíndromo.\n", num);
        }
        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &num);
    }

    return 0;
}

bool eh_palindromo(int num) {
    int original = num;
    int invertido = 0;

    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    return original == invertido;
}