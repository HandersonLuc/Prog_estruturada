/*Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Faça um
programa que leia o salário de um funcionário, o valor total de suas vendas e apresente o seu
salário final. Considere N funcionários (use alocação dinâmica).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float salario_fixo;
    float vendas;
    float salario_final;
} Funcionario;

int main() {
    int n;
    printf("Digite o número de funcionários: ");
    scanf("%d", &n);

    Funcionario *func = (Funcionario *)malloc(n * sizeof(Funcionario));
    if (func == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o salário fixo do funcionário %d: ", i + 1);
        scanf("%f", &func[i].salario_fixo);
        printf("Digite o valor total das vendas do funcionário %d: ", i + 1);
        scanf("%f", &func[i].vendas);
    }

    calcula_salario_final(func, n);

    for (int i = 0; i < n; i++) {
        printf("Salário final do funcionário %d: %.2f\n", i + 1, func[i].salario_final);
    }

    free(func);
    return 0;
}

void calcula_salario_final(Funcionario *func, int n) {
    for (int i = 0; i < n; i++) {
        func[i].salario_final = func[i].salario_fixo + (func[i].vendas * 0.06);
    }
}