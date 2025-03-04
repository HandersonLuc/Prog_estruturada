/*Faça um programa que preencha uma matriz M5x5 com números reais. Após
preencher a matriz:
a) Verifique se ela é simétrica.
b) Imprima a soma dos elementos da diagonal principal.
c) Imprima a soma dos elementos da diagonal secundária.

Faça funções distintas para cada operação.*/

#include <stdio.h>
#define m 5

int preenche(int mat[m][m]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Digite o elemento da posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }   
    }
}

int check_simetric(int mat[m][m]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != mat[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int sum_diag(int mat[m][m]){
    int sum = 0;
    for (int i = 0; i < m; i++)
        {
        sum+=mat[i][i];
    }
    return sum;
}

int sum_diag_s(int mat[m][m]){
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum+=mat[i][m-1-i];
    }
    return sum;
}


int main(){
    int mat[m][m];
    preenche(mat);
    printf("valor da diagonal principal is: %d\n",sum_diag(mat));
    printf("valor da diagonal secundaria is: %d\n",sum_diag_s(mat));
    if (check_simetric_matrix(mat))
    {
        printf("A matriz e simmetrica.\n");
    }else
    {
        printf("A matriz nao e simmetrica.\n");
    }
    return 0;
}