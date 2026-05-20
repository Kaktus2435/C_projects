/* 
Exercițiul 5: Conversia notelor școlare în calificative 
Scrie un program care citește o notă numerică (de la 1 la 10) de la tastatură și afișează calificativul corespunzător:
1-4: Insuficient
5-6: Suficient
7-8: Bine
9-10: Foarte bine
*/

#include <stdio.h>

int main()
{
    int note;
    while (1)
    {
        printf("\n");
        printf("Introdu nota: ");
        scanf("%d", &note);
        switch (note)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Insuficient!");
            break;
        case 5:
        case 6:
            printf("Suficient!");
            break;
        case 7:
        case 8:
            printf("bine!");
            break;
        case 9:
        case 10:
            printf("Foarte bine!");
            break;
        default:
            printf("Nota introdusa este incoprecta!");
            break;
            return 0;
        }
    }
}