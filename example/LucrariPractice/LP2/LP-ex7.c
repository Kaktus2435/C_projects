/*
Identifică cel mai mare număr impar şi cel mai mare număr par ale unui vector cu condiţia că impar < par
Cod sursă                               Descriere cod
v1[]={3,4,5,8,9,1,2,7,10,0}             odd=9
                                        even=10
*/

#include <stdio.h>
#include <stdlib.h> // biblioteca pentru alocarea dinamica a memoriei

int findEvenArr(int v1[], int l);
void findOddArr(int v1[], int l);

int main()
{
    int v1[] = {3, 4, 5, 8, 9, 1, 2, 7, 10, 0};
    int l = sizeof(v1) / sizeof(v1[0]);

    findEvenArr(v1, l);
    findOddArr(v1, l);
    return 0;
}

int findEvenArr(int v1[], int l)
{
    int *evenArr = (int *)malloc(sizeof(int) * l); // alocarea memoriei pentru matrice noua cu l numar de elemente
    if (evenArr == NULL)
        printf("alocarea memoriei a esuat"); // verificare daca memoria a fost alocata

    int bigerEvenNumber = v1[0];
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        if (v1[i] % 2 == 0)
        {
            evenArr[k] = v1[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (evenArr[i] > bigerEvenNumber)
        {
            bigerEvenNumber = evenArr[i];
        }
    }
    printf("\neven: %d\n", bigerEvenNumber);

    free(evenArr);  // eliberarea memoriei
    evenArr = NULL; // in loc de verificare, fortam sa fie null
    return bigerEvenNumber;
}

void findOddArr(int v1[], int l)
{
    int *oddArr = (int *)malloc(sizeof(int) * l);
    if (oddArr == NULL)
        printf("alocarea memoriei a esuat");

    int bigerOddNumber = v1[0];
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        if (v1[i] % 2 != 0)
        {
            oddArr[k] = v1[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (oddArr[i] > bigerOddNumber)
        {
            bigerOddNumber = oddArr[i];
        }
    }
    printf("\neven: %d\n", bigerOddNumber);
    free(oddArr);
    oddArr = NULL;
}