#include <iostream>

using namespace std;

int funkcja(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main()
{

    printf("%d" , funkcja(81,24));

    return 0;
}
