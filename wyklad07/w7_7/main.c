#include <stdio.h>
int main(void)
{
    int tab[4]={1,-3,33,-36};
    int *wsk1, *wsk2;
    wsk1=tab+3;
    printf("%p %d\n",wsk1,*wsk1);
    wsk1--;
    printf("%p %d\n",wsk1,*wsk1);
    return 0;
}
