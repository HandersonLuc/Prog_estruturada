/*Ler N notas dos alunos de uma turma e calcular a média.
Ao final imprimir a quantidade de alunos que ficou acima
da média calculada.*/

#include <stdio.h>
#define MAX 4


float media(float vet[], int n){
    float soma =0.0;
    for (int i = 0; i < MAX; i++)
    {
        soma += vet[i];
    }
    return soma/ n;
}

int main() {
    float vet[MAX];
    int acima_media = 0;
    for (int i = 0; i < MAX; i++)
    {
        printf("Note of student %d: ", i);
        scanf("%f", &vet[i]);
    }
    float med_note = media(vet, MAX);
    printf("The mean of the students notes is: %.2f \n", med_note);
    for (int i = 0; i < MAX; i++)
    {
        if (vet[i]> med_note)
        {
            acima_media++;
        }
    }
    printf("The number of students above the mean is: %d\n", acima_media);  
    return 0;
}
