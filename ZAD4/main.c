#include <stdio.h>
#include <stdlib.h>

float funkcja(float a, float b, float c, float d){
    float x = (a+b+c+d)/4;
    return x;
}

int main()
{
    int m = 1;
    int n = 2;
    int o = 3;
    int p = 4;
    printf("%f" , funkcja(m,n,o,p));

    return 0;
}
