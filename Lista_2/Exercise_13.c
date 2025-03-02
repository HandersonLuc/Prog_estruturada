/*Faça um programa que apure os votos de uma eleição presidencial onde concorreram três
candidatos. Os votos podem ser 1, 2, 3 e 4 e devem ser contados de acordo com a tabela
abaixo:

1 João da Silva
2 José Ramalho
3 Maria de Mattos
4 Voto em Branco
Outros Voto Nulo

Calcule e escreva o total de votos de cada candidato, o total de votos brancos, o total de
votos nulos e o nome do candidato que recebeu mais votos.*/

//well, how i do to stop this ?
#include <stdio.h>
int main(){
    int vote, joao, jose, maria, nulo, blank;
    printf("Vote: 1 to joao, 2 to jose, 3 to maria, 4 to blank \n");
    scanf("%d", &vote);
    switch (vote)
    {
    case 1:
        joao++;
        break;
    case 2:
        jose++;
        break;
    case 3:
        maria++;
        break;
    case 4:
        blank++;
        break;
    default:
        nulo++;
        break;
    }
    return 0;
}