/*Faça um programa que leia o quadro de cargos e salários de
uma empresa e que calcule a média salarial.
 Crie uma estrutura com os campos cargo e salário
 Ao final do programa escreva os cargos que estão acima da média
calculada*/

#include <stdio.h>
#include <string.h>
#define n 2

typedef struct {
    char cargo[20];
    double salario;
} funcionario;

int main(){
    funcionario func[n];
    double soma_sal = 0.0, media_sal;
    for (int i = 0; i < n; i++){
        printf("Cargo %d: \n", i);
        scanf("%s", func[i].cargo);
        printf("Salario %d: \n", i);
        scanf("%lf", &func[i].salario);
        soma_sal += func[i].salario;
    }
    media_sal = soma_sal / n;
    printf("Media salarial: %.2lf\n", media_sal);
    for (int i = 0; i < n; i++){
        if (func[i].salario > media_sal){
            printf("Cargo: %s\n", func[i].cargo);
        }
    }

    return 0;
}


