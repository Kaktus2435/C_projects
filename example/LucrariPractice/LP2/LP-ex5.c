#include <stdio.h>
/*
Caută prezența unui număr introdus de la tastatura și află de câte ori acesta se repetă într-un vector:
v1[]={1,3,4,3,8}      num 3 at v[2]
keyboard_num=3        num 3 at v[4]
*/
int main()
{
    int v1[] = {1, 3, 4, 3, 8};
    int l = sizeof(v1) / sizeof(v1[1]);
    int num = 0;
    int frequency = 0;
    int keyboard_num = 0;
    printf("Scrie un numar: \n");
    scanf("%d", &keyboard_num);
    for (int i = 0; i < l; i++)
    {
        if (v1[i] == keyboard_num)
        {
            num = v1[i];
            frequency++;
            printf("num %d at v[%d]\n", keyboard_num, i);
        }
    }

    return 0;
}