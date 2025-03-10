/* Escreva um programa para o seguinte problema: determinar se uma palavra A ocorre dentro de uma cadeia de
   caracteres B, mesmo que de forma não contígua. Fazer uma função que retorne 1 se A ocorrer dentro de B e zero,
   caso contrário. Exemplo:
   A = "lanterna"
   B = "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença."
   Resposta: A ocorre dentro de B:
   No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença. */

   #include <stdio.h>
   #include <string.h>
      
   int main() {
       char A[100], B[1000];
       
       printf("Digite a palavra A: ");
       fgets(A, sizeof(A), stdin);
       A[strcspn(A, "\n")] = '\0'; // Remove newline character
       
       printf("Digite a cadeia de caracteres B: ");
       fgets(B, sizeof(B), stdin);
       B[strcspn(B, "\n")] = '\0'; // Remove newline character
       
       if (ocorre(A, B)) {
           printf("A palavra '%s' ocorre dentro de B.\n", A);
       } else {
           printf("A palavra '%s' nao ocorre dentro de B.\n", A);
       }
       
       return 0;
   }
   
   int ocorre(char *A, char *B) {
       int lenA = strlen(A);
       int lenB = strlen(B);
       int j = 0;
       
       for (int i = 0; i < lenB && j < lenA; i++) {
           if (B[i] == A[j]) {
               j++;
           }
       }
       
       return j == lenA;
   }