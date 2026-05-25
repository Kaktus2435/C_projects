/*
 Identifică cele mai mari trei numere ale unui vector
Input (intrare)                  Output (rezultat)
v1[]={3,4,5,8,9,1,2,7,10}        num1=10
num2=9
num3=8
*/
#include <stdio.h>

int main()
{
    int v1[] = {3, 5, 8, 6, 2, 7, 10, 11};
    int min = v1[0];
    for(int i = 0; i < 8; i++){
        if(v1[i] < min) {
            min = v1[i]; 
        }
    }
        printf("min= %d\n", min);

    return 0;
}