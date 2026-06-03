#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    tab[0][0] = 1; tab[0][1] = 2; tab[0][2] = 3;
    tab[1][0] = 4; tab[1][1] = 5; tab[1][2] = 6;
    printf("tab %p\n", tab);
    printf("tab[0] %p\n", *tab);
    printf("tab[1] %p\n", *(tab+1));
    printf("&tab[0] %p\n", tab);
    printf("&tab[1] %p\n", tab+1);
    printf("&tab[0][0] %p %p\n", &tab[0][0], *tab);
    printf("tab[0][0] %d %d\n", tab[0][0], **tab);
    printf("&tab[0][1] %p %p\n", &tab[0][1], *tab+1);
    printf("tab[0][1] %d %d\n", tab[0][1], *(*tab+1));
    printf("&tab[0][2] %p %p\n", &tab[0][2], *tab+2);
    printf("tab[0][2] %d %d\n", tab[0][2], *(*tab+2));
    printf("&tab[1][0] %p %p\n", &tab[1][0], *(tab+1));
    printf("tab[1][0] %d %d\n", tab[1][0], **(tab+1));
    printf("&tab[1][1] %p %p\n", &tab[1][1], *(tab+1)+1);
    printf("tab[1][1] %d %d\n", tab[1][1], *(*(tab+1)+1));
    printf("&tab[1][2] %p %p\n", &tab[1][2], *(tab+1)+2);
    printf("tab[1][2] %d %d\n", tab[1][2], *(*(tab+1)+2));

    free(tab[0]);
    free(tab[1]);
    free(tab);

    return 0;
}
