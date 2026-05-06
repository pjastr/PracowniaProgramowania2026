#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    *(tab+0)=(int*) malloc(sizeof(int)*3);
    *(tab+1)=(int*) malloc(sizeof(int)*3);
    return 0;
}
