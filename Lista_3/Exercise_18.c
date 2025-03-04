/*Faça um programa que preencha uma matriz M10x5 com números inteiros. Após
preencher a matriz, crie uma segunda matriz que seja a transposta de M. Ao
final, escreva a matriz Transposta.*/


#include <stdio.h>

#define M 10
#define N 5

int preenche(int mat[M][N]){
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Digite o elemento da matriz M1 [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

}

int transposta(int mat[M][N], int trans[N][M]){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            trans[i][j] = mat[j][i];
        }
    }
}

void imprime(int mat[N][M]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[M][N], Transposta[N][M];
    preenche(mat);
    transposta(mat, Transposta);
    printf("Matrix transposta:\n");
    imprime(Transposta);
    return 0;
}