#include <stdio.h>
#include <stdlib.h>

int funkcja(int, int, int);


int main()
{
    int a = 1;
    int b = 3;
    int c = 2;
    int x = 17;
    int y = 15;
    int z = 16;

    printf("Najwieksze z {1,3,2} jest: %d" , funkcja(a,b,c));
    printf("\nNajwieksze z {17,15,16} jest: %d" , funkcja(x,y,z));

    return 0;
}

int funkcja(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else if(c>b){
            return c;
        }else{
            return b;
        }
    }else{
        if(b>c){
            return b;
        }else if(c>a){
            return c;
        }else{
            return a;
        }
    }
}
