#include <stdio.h>
#include <stdlib.h>

void przedstaw(char a[], char b[], char c[]){
    printf("Imie: %s\nNazwisko: %s\nZainteresowania: %s" ,a ,b ,c);
};

int main()
{

    char n [6] = "Jacek";
    char m [9] = "Maruszak";
    char o [255] = "Sporty druzynowe oraz informatyka.";
    przedstaw(n,m,o);

    return 0;
}
