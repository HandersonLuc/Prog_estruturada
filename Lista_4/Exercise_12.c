/* Faça um programa que leia dois números inteiros e que calcule o MDC (máximo divisor comum) entre eles. Crie uma
   função recursiva que retorne o valor do MDC, sabendo que:
   mdc(x, y) = y, se y ≤ x e x resto y = 0
   mdc(x, y) = mdc(y, x), se x < y
   mdc(x, y) = mdc(y, x resto y), caso contrário */

   #include <stdio.h>
   
   int main() {
       int x, y;
       printf("Digite o primeiro número: ");
       scanf("%d", &x);
       printf("Digite o segundo número: ");
       scanf("%d", &y);
   
       int resultado = mdc(x, y);
       printf("O MDC de %d e %d é: %d\n", x, y, resultado);
   
       return 0;
   }
   
   int mdc(int x, int y) {
       if (y == 0) {
           return x;
       }
       return mdc(y, x % y);
   }