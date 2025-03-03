/*Faça um programa imprima na tela um Menu que
permita o usuário escolher as seguintes operações:
+, -, /, *.
 Se um operador inválido for digitado deve ser impresso um
erro
 Se o usuário digitar ! o programa deve ser finalizado
 Se o usuário escolher uma das quatro operações, o
programa deve ler dois números reais e efetuá-los
 Faça funções para escrever o Menu, realizar a operação e
verificar se o operador é válido*/

#include <stdio.h>
#include <string.h>


// Função para exibir o menu
void escreve_menu() {
    printf("\nMENU\n");
    printf("+ : Adicao\n");
    printf("- : Subtracao\n");
    printf("* : Multiplicacao\n");
    printf("/ : Divisao\n");
    printf("! : Sair\n");
    printf("Escolha uma operacao: ");
}

// Função para verificar se o operador é válido
int operador_valido(char op) {
    return (op == '+' || op == '-' || op == '*' || op == '/' || op == '!');
}

// Função para realizar a operação
float realizar_operacao(float num1, float num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 0;
            }
        default:
            return 0;
    }
}

int main() {
    char operador;
    float num1, num2;
    do { // ao menos uma vez
        escreve_menu();
        scanf(" %c", &operador);

        if (!operador_valido(operador)) { // caso não tenha este operados a saída será False, e com a negação se torna  True
            printf("Operador inválido! Tente novamente.\n");
            continue;
        }

        if (operador == '!') {
            printf("Encerrando o programa. Até logo!\n");
            break;
        }

        printf("Digite dois números: ");
        scanf("%f %f", &num1, &num2);

        float resultado = realizar_operacao(num1, num2, operador);
        printf("Resultado: %.2f\n", resultado);
    } while (1);
    return 0;
}
