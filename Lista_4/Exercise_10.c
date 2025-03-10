/* Em uma competição de ginástica olímpica a nota é determinada por um painel de seis juízes. Cada um dos juízes
   atribui uma nota entre zero e dez para o desempenho do atleta. Para calcular a nota final, a nota mais alta e a nota
   mais baixa são descartadas e é calculada a média das quatro restantes. Escreva um programa que leia 6 notas entre
   zero e dez e calcule a média, de cada um dos 30 atletas, após o descarte da maior e da menor nota. Faça uma função
   que receba as seis notas lidas e que retorne para o programa principal a média calculada. */

   #include <stdio.h>

   #define N 30
   
   
   int main() {
    for (int i = 0; i < N; i++){
            float maior, menor, nota, media = 0.0;
            for (int j = 0; j < 6; j++){
                printf("Digite a %d nota: ", j+1);
                scanf("%f", &nota);
                if (nota > maior){
                    maior = nota;
                }
                
                if (nota < menor){
                    menor = nota;
                }
                media += nota;
            }
            media = media - (maior + menor);
            media /= 4;
            printf("A nota media da atleta %d is: %.2f \n", i + 1, media);
        }
    return 0;
}