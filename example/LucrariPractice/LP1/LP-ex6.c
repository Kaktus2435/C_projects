/* 
Scrie un program care citește de la tastatură distanța parcursă (în kilometri) și cantitatea de carburant consumată (în litri).
Programul ar trebui să calculeze consumul mediu de carburant per 100 km. 
*/

#include <stdio.h>

int main()

{
    double distance;
    double fuel_used;
    double consumption_100k;

    printf("Introdu distanta parcursa: ");
    printf("\n");
    scanf("%lf", &distance);
    printf("Introdu cantitatea de combustibil: ");
    printf("\n");
    scanf("%lf", &fuel_used);
    printf("\n");

    if (distance <= 0 || fuel_used <= 0)
    {
        printf("Datele introduse nu pot fi 0 sau negative.");
    }
    else
    {
        consumption_100k = (fuel_used / distance) * 100;
        printf("Consumul mediu de carburant per 100 km este de: (%.2lf litri)", consumption_100k);
    }
    return 0;
}