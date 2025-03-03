/*Faça um programa que preencha uma matriz 3x4 com
números inteiros.
a. Faça uma função para preencher a matriz;
b. Faça uma função que escreva a matriz formatada;*/

#include <stdio.h>
#define col 3
#define row 2

int preenche(int mat1[col][row]){
    for (int i = 0; i < row; i++) // row
    {
        for (int j = 0; j < col; j++) // column
        {
            printf("Enter the number of positio[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
}

void escreve(int mat[col][row]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int mat[col][row];
    preenche(mat);
    escreve(mat);
    return 0;
}