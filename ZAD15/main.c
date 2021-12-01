#include <stdio.h>
#include <stdlib.h>

char * funkcja(char* tab, int* a, int* b){
    char * tab2 = malloc(b);

    for(int i = 0 ; i < a ;  i++){
        tab2[i] = tab[i];
    }

    return tab2;

}

int main()
{

    char tab [] = "JACEKPLACEK";
    int a = 11;
    int b = 11;

    printf("%s" , funkcja(tab,a,b));

    return 0;
}
