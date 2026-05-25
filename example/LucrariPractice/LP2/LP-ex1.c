/*
 Identifică elementul cel mai mic și cel mai mare ale
unui vector
Input (intrare)                      Output (rezultat)
v1[]={3,5,8,6,2,7,10,11}             min=2
                                     max=11
*/
#include <stdio.h>
int v1[] = {3, 5, 8, 6, 2, 7, 10, 11};

void minMax(int v[], int length, int *min, int *max)
{
    *max = v1[0];
    *min = v1[0];
    for (int i = 0; i < length; i++)
    {
        if (v[i] < *min)
        {
            *min = v[i];
        }
        if (v[i] > *max)
        {
            *max = v[i];
        }
    }
}

int main()
{
    int min, max;
    minMax(v1, 8, &min, &max);
    printf("Valoarea minima este: %d\n", min);
    printf("Valoarea maxima este: %d\n", max);
    return 0;
}