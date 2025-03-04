/*Considere um vetor que guarde 100 números reais. Faça um programa que
preencha este vetor. Após o vetor preenchido multiplique seus valores ímpares
por 3 e divida os valores pares por 2. Escreva o maior elemento do vetor.*/

#include <stdio.h>
#define tam 100


float preenche(float vet[], int n){
    float maior = 0.0;
    for (int i = 0; i < n; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%f", &vet[i]);
        if ((int)vet[i] % 2 == 0)
        {
            vet[i] /= 2; 
        }else
        {            
            vet[i] *= 3;
        }
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}

int main(){
    float vet[tam];
    printf("Maior elemento do vetor: %.2f\n",preenche(vet, tam));
    return 0;
}