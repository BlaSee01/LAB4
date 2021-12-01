#include <stdio.h>
#include <stdlib.h>

int funkcja(int t[], int a){

    if(a%2==0){
        return t[a/2-1];
    }else{
        return t[a/2];
    }

}

int main()
{

int tab [] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
int len = sizeof(tab)/sizeof(int);

printf("%d" , funkcja(tab,len));

    return 0;
}
