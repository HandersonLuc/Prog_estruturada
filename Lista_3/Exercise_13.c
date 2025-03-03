/*Faça um programa que preencha uma matriz NxN e que
escreva a soma dos elementos da diagonal principal.
a. Faça uma função para preencher a matriz;
b. Faça uma função que escreva a matriz formatada;
c. Faça uma função que retorne a soma dos elementos da
diagonal principal.*/

#define n 2
#include <Stdio.h>

int preenche(int mat[n][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite o elemento da posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int prin_diag(int mat[n][n]){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }else
            {
                continue;
            }
            
        }
    }
    return sum;
}

void write_matrix(int mat[n][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[n][n];
    preenche(mat);
    write_matrix(mat);
    printf("Sum of elements in principal diagonal is: %d", prin_diag(mat));
    return 0;
}