/*
 Identifică cele mai mici trei numere impare ale unui vector
Input (intrare)                  Output (rezultat)
v1[]={3,5,1,8,9,2,7,10,11,0}        minodd1=1
                                    minodd2=3
                                    minodd3=5
*/
#include <stdio.h>

int main()
{
    int v1[] = {3, 5, 1, 8, 9, 2, 7, 10, 11, 0};
    int k = 0;
    int l = sizeof(v1) / sizeof(v1[0]);
    int v2[l];
    for (int  i = 0; i < l; i++) {
        if(v1[i] % 2 != 0){
            v2[k] = v1[i]; 
            printf("%d\n", v2[k]);
            k++;

        }
    }
    int minOdd1 = v2[0];
    int minOdd2 = v2[1];
    int minOdd3 = v2[2];

    for (int i = 0; i < k; i++) {
        if(minOdd1 > v2[i]) {
            minOdd3 = minOdd2;
            minOdd2 = minOdd1;
            minOdd1 = v2[i];
        } else if(minOdd2 > v2[i] && v2[i] != minOdd1){
            minOdd3 = minOdd2;
            minOdd2 = v2[i];
        } else if(minOdd3 > v2[i] && v2[i] > minOdd2 ){
            minOdd3 = v2[i];
        } 
    }
    printf("Min1: %d\n", minOdd1);
    printf("Min2: %d\n", minOdd2);
    printf("Min3: %d\n", minOdd3);
    
    return 0;
}
