/*Faça um programa em C que leia uma data no formato
“dd/mm/aaaa” e que escreva a mesma data por
extenso. Utilize o comando switch case.*/

#include <stdio.h>

int main() {
    int day, month, year;
    printf("Digite a data no formato dd/mm/yyyy\n");
    scanf("%d / %d / %d", &day, &month, &year);
    switch (month)
    {
    case 1:
        printf("%d january %d\n", day, year);
        break;
    case 2:
        printf("%d february %d\n", day, year);
        break;
    case 3:
        printf("%d march %d\n", day, year);
        break;
    case 4:
        printf("%d april %d\n", day, year);
        break;
    case 5:
        printf("%d may %d\n", day, year);
        break;
    case 6:
        printf("%d june %d\n", day, year);
        break;
    case 7:
        printf("%d july %d\n", day, year);
        break;
    case 8:
        printf("%d augusto %d\n", day, year); 
        break;
    case 9:
        printf("%d september %d\n", day, year);
        break;
    case 10:
        printf("%d october %d\n", day, year);
        break;
    case 11:
        printf("%d november %d\n", day, year);
        break;
    case 12:
        printf("%d december %d\n", day, year);
        break;
    default:
        printf("Invalid data");
        break;
    }
    return 0;
}