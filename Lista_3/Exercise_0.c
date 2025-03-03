//Example


#include <stdio.h>
int soma(int A, int B) {
    return(A + B);
}

int main() {
    int n1, n2;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("O resultado e: %d", soma(n1,n2));
    return 0;
}