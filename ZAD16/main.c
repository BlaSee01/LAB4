#include <stdio.h>
#include <stdlib.h>

void pokaz(char *a, int *n){
    for(int i = 0 ; i < n ; i++){
        printf("\nT[%d]: %d" , i , a[i]);
    }
}

int funkcja(int *a){

    int x;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d" , &x);

    char* b = malloc(x);

    for(int i = 0 ; i < x ; i++){
        printf("\nPodaj %d element: " , i+1);
        scanf("%d" , &b[i]);
    }
    return b;
}

int main()
{

    int a = 5;
    pokaz(funkcja(a),a);

    return 0;
}
