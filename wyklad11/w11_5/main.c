#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};
    printf("%p\n",&tab[0][0]);
    printf("%p\n",&tab[0][1]);
    printf("%p\n",&tab[0][2]);
    printf("%p\n",&tab[0][3]);
    printf("%p\n",&tab[1][0]);
    printf("%p\n",&tab[1][1]);
    printf("%p\n",&tab[1][2]);
    printf("%p\n", tab);
    printf("%p\n", * tab);
    printf("%d\n", ** tab);
    printf("%p\n", tab+1);
    printf("%p\n", * tab+1);
    printf("%p\n", *(tab+1));
    printf("%d\n", *(* tab+1));
    return 0;
}
