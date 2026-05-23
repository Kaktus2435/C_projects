/*
Exercițiul 7: Conversia timpului
Creează un program care citește un număr de secunde de la tastatură și le convertește în ore, minute și secunde.
*/

#include <stdio.h>

int main()

{
    int enteredValue;
    int seconds;
    int minutes;
    scanf("%d", &enteredValue);
    int hours = enteredValue / 3600;
    printf("\n");
    minutes = (enteredValue % 3600) / 60;
    seconds = (enteredValue % 3600) % 60;
    printf("Ore: (%d)\nMinute: (%d)\nSecunde: (%d)\n", hours, minutes, seconds);

    return 0;
}