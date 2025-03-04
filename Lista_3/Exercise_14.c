/*Crie uma matriz N x N que representará as amizades entre um
grupo de pessoas. A matriz AMIZADE é preenchida, em cada
posição com o número 0 ou 1. O número 1 em uma posição i,j
indica que a pessoa i é amiga de j. Por outro lado, o número 0
indica que i e j não são amigos.

o Faça um programa que preencha a matriz de amizades e depois
verifique se existe alguma inconsistência, já que a relação de
amizade é recíproca.

o Faça uma função que retorne quantas inconsistências existem na
matriz.*/

#include <stdio.h>

#define n 2

int checkConsistency(int AMIZADE[n][n]) {
    int inconsistencies = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (AMIZADE[i][j] == 1 && AMIZADE[j][i] == 0) {
                inconsistencies++;
            }
        }
    }
    return inconsistencies;
}

int preenche(int mat[n][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite se a pessoa %d tem amizade com a pessoa %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int main() {
    int mat[n][n];
    preenche(mat);
    printf("Exist %d inconsistencias\n", checkConsistency(mat));
    return 0;
}