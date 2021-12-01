#include <stdio.h>
#include <stdlib.h>

char* funkcja(char* t, int a){

    char* tab = malloc(a);

    for(int i = 0 ; i < a ; i++){
        tab[i] = t[i];
    }
    return tab;
}

int main()
{
    char n [] = "Jacek Maruszak";
   printf("%s" , funkcja(n,5));

    return 0;
}
