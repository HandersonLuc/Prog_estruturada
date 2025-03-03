/*Faça uma função que calcule o quociente da divisão de A por B,
utilizando subtrações sucessivas.*/

#include <stdio.h>

// Função recursiva para calcular o quociente da divisão de A por B
int quociente(int A, int B) {
    if (A < B) {
        return 0; // Caso base: se A for menor que B, o quociente é 0
    } else {
        return 1 + quociente(A - B, B); // Subtrações sucessivas
    }
}

int main() {
    int A, B;

    // Solicita os valores de A e B
    printf("Digite o valor de A (dividendo): ");
    scanf("%d", &A);
    printf("Digite o valor de B (divisor): ");
    scanf("%d", &B);

    // Valida se o divisor não é 0
    if (B <= 0) {
        printf("Erro: o divisor B deve ser maior que 0.\n");
        return 1; // Termina o programa caso B seja inválido
    }

    // Calcula e exibe o quociente
    printf("O quociente da divisão de %d por %d é: %d\n", A, B, quociente(A, B));

    return 0;
}
