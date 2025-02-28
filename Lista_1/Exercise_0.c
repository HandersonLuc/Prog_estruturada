/*In this case i'll try use the comand Switch
Fist i'll do a simply task
i'll do a programm that will print the day of week*/

#include <stdio.h> // importar biblioteca para receber e entra

int main() {
    int day;
    printf("choose a day of week, 1 for sunday, 2 for monday, etc...\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("sunday\n");
        break;
    case 2:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");
        break;
    case 5: 
        printf("thursday\n");
        break;
    case 6:
        printf("friday\n");
        break;
    case 7:
        printf("saturday\n");
        break;    
    default:
        printf("invalid day");
        break;
    }
    return 0;
}

