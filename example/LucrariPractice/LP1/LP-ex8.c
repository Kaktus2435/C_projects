/*
Exercițiul 8: Verificarea anului bisect
Scrie un program care citește un an de la tastatură și determină dacă este un an bisect.
Un an este bisect dacă este divizibil cu 4, dar nu cu 100, sau este divizibil cu 400.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Scrie anul pentru a vedea daca este bisect:\n");
    scanf("%d", &year);

    if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
    {
        printf("Anul %d este bisect!", year);
    }
    else
    {
        printf("Anul %d NU este bisect!", year);

    }
    return 0;
}