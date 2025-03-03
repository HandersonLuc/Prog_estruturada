// função separada para saber se é par
#include <stdio.h>

int par(int N) {
    if (N % 2 == 0)
        return 1; // True
    else
        return 0;

}
int main() {
int N;
    printf("Digite um valor inteiro: ");
    scanf("%d", &N);
    if (par(N)) // aqui chama a função, caso seja par
        printf("O número e PAR");
    else
        printf("O número e ÍMPAR");
        return 0;
}