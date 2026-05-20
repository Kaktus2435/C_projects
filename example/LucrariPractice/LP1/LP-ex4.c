/* 
Exercițiul 4: Verificarea eligibilității pentru un împrumut 
Implementează un program care citește salariul anual și scorul de credit de la tastatură. 
Pentru a fi eligibil pentru un împrumut, salariul trebuie să fie de cel puțin 20,000 MDL/lună, iar scorul de credit de cel puțin 600.
*/
#include <stdio.h>

int main()
{
    int salary;
    int score;
    printf("Indica salariu in lei: ");
    scanf("%d", &salary);
    printf("Indica scorul de credit: ");
    scanf("%d", &score);

    if (salary >= 20000 && score >= 600) {
        printf("Felicitari esti eligibil pentru imprumut!");
    }
    else
    {
        printf("Cu parere de rau nu esti eligibil pentru imprumut!");
    }

    return 0;
}