/* Sabendo que o último caractere de uma string é ‘\0’, faça um programa que escreva a quantidade de caracteres desta
   string. Crie uma função recursiva que retorne esta quantidade de caracteres. Não é permitido o uso da função strlen. */

   #include <stdio.h>
   
   int main() {
       char str[100];
       printf("Digite uma string: ");
       fgets(str, sizeof(str), stdin);
       int quantidade = conta_caracteres(str);
       printf("A quantidade de caracteres da string é: %d\n", quantidade);
       
       return 0;
   }
   
   int conta_caracteres(char *str) {
       if (*str == '\0') {
           return 0;
       }
       return 1 + conta_caracteres(str + 1);
   }