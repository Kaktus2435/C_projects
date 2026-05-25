/*
Scrie o functie care identifica daca un sir de caractere este un polindrom.
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char v[100]; 
    
    printf("Scrie sirul de caractere:\n");
    scanf("%99s", v); 
    
    int l = strlen(v);
    bool isPalindrome = true;

    for (int i = 0; i < l / 2; i++)
    {
        printf("%c\n", v[i]);
        printf(" %c\n", v[l - 1 -i]);
        if(v[i] != v[l - 1 -i] ) {
          isPalindrome = false;
        break;
       }
    }
    printf("%d", isPalindrome);

    printf("\n"); 
    return 0;
}