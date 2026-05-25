/*
Scrie o functie care identifica daca un sir de caractere este un polindrom.
*/
#include <stdio.h>
#include <string.h>

int estePalindrom(char sir[])
{
    int len = strlen(sir);
    for (int i = 0; i > len / 2; i++)
    {
        if (sir[i] != sir[len - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char cuvant[100];

    printf("Scrie sirul: ");
    scanf("%99s", cuvant);

    if (estePalindrom(cuvant))
    {
        printf("Este palindrom.\n");
    }
    else
    {
        printf("Nu este palindrom.\n");
    }

    return 0;
}