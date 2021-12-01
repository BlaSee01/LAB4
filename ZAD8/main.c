#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cz1(int a){

    int b = abs(a);
    return b;

}

int cz2(int a){
    int b = pow(a,2);
    return b;
}

void management(){
    int n;
    int m;
    printf("Podaj liczbe: ");
    scanf("%d" , &n);
    printf("\nCo obliczyc?\n[1] Wartosc bezwzgledna\n[2] Kwadrat liczby\n\nODPOWIEDZ: ");
    scanf("%d" , &m);

    if(m==1){
        printf("\nModul: %d" , cz1(n));
    }else if(m==2){
        printf("\nKwadrat: %d" , cz2(n));
    }else{
        return 0;
    }
}

int main()
{

management();
    return 0;
}
