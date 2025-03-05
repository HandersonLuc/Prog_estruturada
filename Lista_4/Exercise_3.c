/*Considere a estrutura ponto

struct tipoPonto {
    int x;
    int y;
};

Faça um programa que
leia 2 pontos e implemente uma única função que:
 Receba os pontos lidos como parâmetros
 Retorne a multiplicação dos pontos
 Retorne a soma dos pontos*/

typedef struct {
    int x, y;
} tipoponto;

 #include <stdio.h>

 void calcula(tipoponto *p1, tipoponto *p2, int *soma, int *mult){
    *soma = p1->x + p2->x + p1->y + p2->y;
    *mult = p1->x * p2->x + p1->y * p2->y;
 }

 int main(){
    tipoponto ponto1, ponto2;
    int soma, mult;
    printf("Digite as coordenadas do primeiro ponto (x, y): ");
    scanf("%d %d", &ponto1.x, &ponto1.y);  
    printf("Digite as coordenadas do segundo ponto (x, y): ");
    scanf("%d %d", &ponto2.x, &ponto2.y);

    calcula(&ponto1, &ponto2, &soma, &mult);
    printf("Soma dos pontos: %d\n", soma);
    printf("Multiplicação dos pontos: %d\n", mult);
    return 0;
 }