#include <stdio.h>
#include <stdlib.h>

void funkcja(int t1[], int t2[], int n1, int n2){

    for(int i = 0 ; i < n1 ; i++){
        t2[i] = t1[i];
        printf("T2[%d] = %d\n" , i,t2[i]);
    }
}

int main()
{
    printf("T2 - Pusta tablica!\n\nPo przekopiowaniu: \n");

    int tab1 [] = {1,2,91,4,5};
    int a = 5;
    int tab2 [6];
    int b = 6;

    funkcja(tab1,tab2,a,b);

    return 0;
}
