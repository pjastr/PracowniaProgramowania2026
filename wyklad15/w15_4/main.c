#include <stdio.h>
#include <stdlib.h>

void transformArray(int tab[], int n, int (*transformer)(int)){
    for(int i=0;i<n;i++){
        tab[i] = transformer(tab[i]);
    }
}

int two(int arg){
    return 2*arg;
}

int main()
{
    int tab[] = {1,2,3,4};
    transformArray(tab,4,two);
    return 0;
}
