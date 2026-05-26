#include <stdio.h>
#include <string.h>

int main()
{
    int a[] = {3, 5, 8, 6, 2, 7, 10, 11};

    int max1 = a[0];
    int max2 = a[1];
    for(int i = 1; i < 8; i++){
        if(max1 < a[i])
        {
            max2 = max1;
            max1 = a[i];
        } 
        else if(a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }

    
    printf("%d\n", max1);
    printf("%d\n", max2);

    return 0;
}