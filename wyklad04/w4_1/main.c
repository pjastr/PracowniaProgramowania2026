#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y){
    return x+y;
}

void foo(){
    printf("Hello!");
    return;
}

int main()
{
    int x=5,y=6;
    printf("%d", suma(x,y));
    return 0;
}



