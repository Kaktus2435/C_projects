/*
Exercițiul 9: Histogramă
Creează un program care citește de la tastatură un set de note obținute de studenți și generează o histogramă care ilustrează distribuția notelor.
Notele sunt valori întregi cuprinse între 1 și 10.
Cerințe funcționale:
Programul trebuie să înceapă prin citirea unui număr natural care indică câte note vor fi introduse. Apoi, citește notele propriu-zise de la tastatură.
Implementează o funcție care calculeaza câte note de fiecare fel există.
Implementează o funcție care afișează histograma notelor, folosind asteriscuri pentru a reprezenta frecvența fiecărei note.
Exemplu de Input:
11
7 8 5 6 7 7 8 9 4 6 5
Output:
1: ---
2: ---
3: ---
4: *--
5: **-
6: **-
7: ***
8: **-
9: *--
10: ---
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int length;

    printf("Introdu numarul de note: ");
    scanf("%d", &length);

    if (length <= 0)
    {
        printf("Dimensiune invalida!\n");
        return 1;
    }

    int frequency[11] = {};
    int max_frequency = 0;

    printf("Introdu notele: \n");
    for (int i = 0; i < length; i++)
    {

        int nota;
        scanf("%d", &nota);
        if (nota > 0 && nota < 11)
        {
            frequency[nota]++;
            if (frequency[nota] > max_frequency)
            {
                max_frequency = frequency[nota];
            }
        }
    }
    printf("\nOutput:\n");
    for (int nota = 1; nota <= 10; nota++)
    {
        printf("%d", nota);

        for (int j = 0; j < frequency[nota]; j++)
        {
            printf("*");
        }

        for (int j = frequency[nota]; j < max_frequency; j++)
        {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}