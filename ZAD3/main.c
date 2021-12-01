#include <stdio.h>
#include <stdlib.h>

void funkcja1(int a){
    if(a%2==0){
        printf("Jest parzysta.\n");
    }else{
        printf("Nie jest parzysta.\n");
    }
}

int funkcja2(int a){
    if(a%2==0){
        return 0;
    }else{
        return 1;
    }
}

int funkcja3(int a){
    if(a%2==0){
        printf("Jest parzysta.\n");
        return 0;
    }else{
        printf("Nie jest parzysta.\n");
        return 1;
    }
}

int main()
{

    int a = 9;
    int b = 8;

    funkcja1(a);
    funkcja2(a);
    funkcja3(b);

    return 0;
}
