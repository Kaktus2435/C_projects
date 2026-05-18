#include <stdio.h>

int main()
{
    int quantity = 0;
    int cost = 0;

    printf("Introdu cantitatea: ");
    scanf("%d", &quantity);
    printf("Introdu pretul: ");
    scanf("%d", &cost);

    int totalCost = quantity * cost;

    if (quantity <= 0)
    {
        printf("Introdu cantitatea!");
    }
    else if (totalCost < 750)
    {
        printf("Pentru %d pizza totalul este (%d lei)", quantity, totalCost);
    }
    else
    {
        printf("Pentru %d pizza totalul este (%d lei) cu reducere de 15%% (%.2f) ",
               quantity, totalCost, totalCost - (totalCost * 0.15));
    }

    return 0;
}