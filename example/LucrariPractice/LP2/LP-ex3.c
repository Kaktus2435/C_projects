/*
 Calculează suma și media elementelor într-un vector.
Input                       Output 
v1[]={5,2,7,6,5,3}          sum=28
                            avg=4.67
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int v1[]={5,2,7,6,5,3};
    int sum = 0;
    float avg = 0.0;   
    int l = sizeof(v1) / sizeof(v1[0]);
    
    for(int i = 0; i < l; i++){
        sum += v1[i];
    }
    avg = sum / l; 
    printf("Suma esta [%d]", sum);
    printf("Media esta [%.2f]", avg);

    return 0;
}