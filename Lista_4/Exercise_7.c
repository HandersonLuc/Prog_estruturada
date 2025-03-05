/*Faça um programa que leia as informações sobre as N ordens de serviço de um oficina mecânica.
Os seguintes dados serão lidos: número da OS, valor, tipo de serviço e nome do cliente. O
programa deve apresentar no final:
• a média de preço dos serviços prestados,
• os nomes dos clientes que pagaram por serviços acima da média calculada;
• o nome do cliente que pagou pelo serviço mais caro.*/

typedef struct{
    int OS;
    float valor;
    char tipo_servico[50];
    char nome_cliente[50];
}cliente;

#include <stdio.h>
#include <string.h>

#define n 2

int main(){
    float media;
    cliente dados[n];
    preenche(dados);
    float media = calcula_media(dados);
    printf("Media de preco dos servicos: %.2f\n", media);
    exibe_acima_media(dados, media);
    exibe_mais_caro(dados);

    return 0;
}

void preenche(cliente dados[]){
    for (int i = 0; i < n; i++){
        printf("OS: ");
        scanf("%d", &dados[i].OS);
        printf("Valor: ");
        scanf("%f", &dados[i].valor);
        printf("Tipo de servico: ");
        scanf("%s", dados[i].tipo_servico);
        printf("Nome do cliente: ");
        scanf("%s", dados[i].nome_cliente);
        printf("\n");
    }
}

float calcula_media(cliente dados[]){
    float soma = 0;
    for (int i = 0; i < n; i++){
        soma += dados[i].valor;
    }
    return soma / n;
}

void exibe_acima_media(cliente dados[], float media){
    printf("Clientes que pagaram por servicos acima da media:\n");
    for (int i = 0; i < n; i++){
        if (dados[i].valor > media){
            printf("%s\n", dados[i].nome_cliente);
        }
    }
}

void exibe_mais_caro(cliente dados[]){
    int indice_mais_caro =0;
    for (int i = 1; i < n; i++){
        if (dados[i].valor > dados[indice_mais_caro].valor){
            indice_mais_caro = i;
        }
    }
    printf("Cliente que pagou pelo servico mais caro: %s\n", dados[indice_mais_caro].nome_cliente);
}