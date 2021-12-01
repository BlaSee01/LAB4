#include <stdio.h>
#include <stdlib.h>

float funkcja(float a[]){

    int i = 0;
    float suma = 0;
    while(a[i]){
        suma+=a[i];
        i++;
    }
    return suma/i;
}

int main()
{

float b [5] = {5,9,3,6,4};
printf("%f" , funkcja(b));

    return 0;
}
