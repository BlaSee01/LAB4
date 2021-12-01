#include <stdio.h>
#include <stdlib.h>

void funkcja1 (int a){
    if(a>=0){
        char b [9] = "positive";
        printf("%s" , b);
    }else{
        char c [9] = {'n','e','g','a','t','i','v','e'};
        printf("%s" , c);
    }
};

int main()
{

    funkcja1(-1);

    return 0;
}
