#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[4] = {4,5,-2,7};
    printf("%p %d %p %d\n", &tab[0], tab[0], tab+0, *tab);
    printf("%p %d %p %d\n", &tab[1], tab[1], tab+1, *(tab+1));
    printf("%p %d\n", &tab[2], tab[2]);
    printf("%p %d\n", &tab[3], tab[3]);
    printf("%p %d\n", &tab[-1], tab[-1]);
    printf("%p %d\n", &tab[-2], tab[-2]);
    printf("%p %d\n", &tab[4], tab[4]);
    printf("%p %d\n", &tab[5], tab[5]);
    printf("%p", tab);
    return 0;
}
