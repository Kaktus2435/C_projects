/* 
Exercițiul 2: Calculul tarifelor pentru parcarea cu plată 
Implementează un program care calculează costul total al parcării conform următoarelor tarife:
Primele 2 ore: 50 MDL/oră.
Următoarele 3 ore: 25 MDL/oră.
Orice oră după primele 5 ore: 15 MDL/oră.

*/
#include <stdio.h>

int main()
{

    int hours = 0;
    int rate = 0;

    while (1)
    {
        printf("\nIntrodu timpul stationarii (sau introduce 0 pentru a OPRI): ");
        scanf("%d", &hours);
        if (hours == 0)
        {
            printf("Programul s-a oprit. O zi buna!\n");
            break;
        }
        else if (hours <= 2)
        {
            int sum = hours * 50;
            printf("Taxa este de %d lei", sum);
        }
        else if (hours <= 5) 
        {
            int sum = 2 * 50 + (hours - 2) * 25;
            printf("Taxa este de %d lei", sum);
        }
        else 
        {
             int sum = 2 * 50 + 3 * 25 + (hours - 5) * 15 ;
            printf("Taxa este de %d lei", sum);
        }
    }

    return 0;
}
