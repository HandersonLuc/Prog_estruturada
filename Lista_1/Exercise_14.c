/*O presidente de um país sul-americano quer investir em saúde, educação, habitação, segurança e
previdência, que são as cinco metas de seu governo. Assim, o presidente decide criar mais um

imposto, o ISSS (Imposto Sobre Seu Saldo), que é calculado sobre o saldo médio da conta-
corrente, segundo a tabela abaixo:

• Saldo < 100: isento
• 100 ≤ Saldo < 1000: imposto devido é 1% sobre o saldo
• 1000 ≤ Saldo < 10000: imposto devido é de 2% sobre o saldo
• 10000 ≤ Saldo < 100000: imposto devido é de 3% sobre o saldo
• Saldo ≥ 100000: imposto devido é de 5% sobre o saldo
Faça um programa que permita ao usuário informar seu saldo bancário e que escreva o
ISSS devido.*/

#include <stdio.h>
int main(){
    float balance, tax;
    printf("Enter your bank balance: ");
    scanf("%f", &balance);
    if (balance < 100)
    {
        tax = 0;
        printf("You are exempt from ISSS\n");
    }else if (balance < 1000)
    {
        tax = balance * 0.01;
        printf("Your ISSS tax is: %.2f\n", tax);
    }else if (balance <10000)
    {
        tax = balance * 0.02;
        printf("Your ISSS tax is: %.2f\n", tax);
    }else if (balance < 100000)
    {
        tax = balance * 0.03;
        printf("Your ISSS tax is: %.2f\n", tax);
    }else
    {
        tax = balance * 0.05;
        printf("Your ISSS tax is: %.2f\n", tax);
    }       
    return 0;
}