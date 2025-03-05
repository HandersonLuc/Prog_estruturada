/* Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes de
   trânsito. Foram informados dados como: a sigla do estado, o número de veículos, e a quantidade
   de acidentes. Faça um programa que calcule e mostre:

   • a sigla do estado que possui maior número de carros;
   • considerando o número de acidentes e o número de carros que circulam no estado,
     informar o estado com menor índice de acidentes de trânsito;
   • o número total de acidentes de trânsito computado. */

   #include <stdio.h>
   #include <string.h>
   
   #define NUM 2
   
   typedef struct {
       char sigla[3];
       int num_veiculos;
       int num_acidentes;
   } Estado;
   
   void preenche(Estado estado[], int n) {
       for (int i = 0; i < n; i++) {
           printf("Digite a sigla do estado %d: ", i + 1);
           scanf("%s", estado[i].sigla);
           printf("Digite o numero de veiculos do estado %d: ", i + 1);
           scanf("%d", &estado[i].num_veiculos);
           printf("Digite o numero de acidentes do estado %d: ", i + 1);
           scanf("%d", &estado[i].num_acidentes);
       }
   }
   
   void informa(Estado estado[], int n, int *most_car, char *most_car_sigla, int *total_acident, char *menor_indice_sigla) {
       float menor_indice = -1.0;
       for (int i = 0; i < n; i++) {
           *total_acident += estado[i].num_acidentes;
           if (estado[i].num_veiculos > *most_car) {
               *most_car = estado[i].num_veiculos;
               strcpy(most_car_sigla, estado[i].sigla);
           }
           float indice_acidente = (float)estado[i].num_acidentes / estado[i].num_veiculos;
           if (menor_indice == -1.0 || indice_acidente < menor_indice) {
               menor_indice = indice_acidente;
               strcpy(menor_indice_sigla, estado[i].sigla);
           }
       }
   }
   
   int main() {
       Estado estado[NUM];
       int most_car = 0, total_acident = 0;
       char most_car_sigla[3], menor_indice_sigla[3];
       
       preenche(estado, NUM);
       informa(estado, NUM, &most_car, most_car_sigla, &total_acident, menor_indice_sigla);
       
       printf("Estado com maior numero de carros: %s\n", most_car_sigla);
       printf("Estado com menor indice de acidentes: %s\n", menor_indice_sigla);
       printf("Numero total de acidentes: %d\n", total_acident);
       
       return 0;
   }

   // essa deu dor de cabeça