/* 
Exercițiul 1: Calculul impozitului pe venit 
Scrie un program care citește salariul anual al unui salariat de la tastatură (în MDL) și calculează impozitul conform următoarelor reguli:
Pentru salarii până la 200,000 MDL, impozitul este 0%.
Pentru salarii între 200,001 și 350,000 MDL, impozitul este 10%.
Pentru salarii peste 350,000 MDL, impozitul este 15%.
*/

#include <stdio.h>

int main()
{
    int sal = 0;

    printf("Introdu salariu:");
    printf("\n");
    scanf("%d", &sal);
    if (sal == 0)
    {
        printf("Introdu salariu!");
    }
    else if (sal < 0)
    {
        printf("Salariu nu poate fi negativ!");
    }
    else if (sal < 200000)
    {
        printf("Salariul %d lei", sal);
        printf("\n");
        printf("Venitul este scutit de impozit (0 lei).");
    }
    else if (sal >= 200000 && sal < 320000)
    {

        printf("Salariul %d lei", sal);
        printf("\n");
        printf("Suma impozitului este (%.2f lei) 10%%.", 0.10 * sal);
    }
    else
    {
        printf("Salariul %d lei", sal);
        printf("\n");
        printf("Suma impozitului este (%.2f lei) 15%%.", 0.15 * sal);
    }

    return 0;
}
