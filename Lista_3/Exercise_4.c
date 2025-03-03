/*Tabela de teste*/
#include <stdio.h>
int A, B, C;

int teste(int A) {
    int D = 2;
    A++;
    C += A;
    D -= (A+B);
    return D+1;
}
int main() {
    A = 5;
    B = 6;
    B -= A;
    C = B + A;
    B = B + teste(B);
    printf("A = %d, B = %d, C = %d", A, B, C);
    return 0;
}