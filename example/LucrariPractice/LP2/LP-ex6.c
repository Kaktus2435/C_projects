/*
Calculează numărul și suma elementelor pozitive și negative într-un vector
Cod sursă                           Descriere cod
v1[]={1,-2,4,-6,7,-1,3}             numpos=4 & sumpos=15
                                    numneg=3 & sumneg=-9
*/
#include <stdio.h>
void extrage_negative(int v1[], int l);
void extrage_positive(int v1[], int l);

int main()
{
    int v1[] = {1, -2, 4, -6, 7, -1, 3};
    int l = sizeof(v1) / sizeof(v1[0]);
    extrage_positive(v1, l);
    extrage_negative(v1, l);
    printf("\n");

    return 0;
}

void extrage_negative(int v1[], int l)
{

    int v1_neg[7];
    int k = 0;
    int sumneg = 0;
    for (int i = 0; i < l; i++)
    {
        if (v1[i] < 0)
        {
            v1_neg[k] = v1[i];
            k++;
        }
    }
    int l_neg = sizeof(v1_neg) / sizeof(v1_neg[0]);
    printf("\nnumneg= %d", k);
    for (int i = 0; i < k; i++)
    {
        sumneg += v1_neg[i];
    }
    printf("\nsumneg= %d", sumneg);
}

void extrage_positive(int v1[], int l)
{
    int v1_pos[7];
    int k = 0;
    int sumpos = 0;

    for (int i = 0; i < l; i++)
    {
        if (v1[i] > 0)
        {
            v1_pos[k] = v1[i];
            k++;
        }
    }
    int l_neg = sizeof(v1_pos) / sizeof(v1_pos[0]);
    printf("\nnumpos= %d", k);

    for (int i = 0; i < k; i++)
    {
        sumpos += v1_pos[i];
    }
    printf("\nsumpos= %d\n", sumpos);
}
