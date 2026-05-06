#include <stdio.h>
#include <stdlib.h>


void zlicz()
{
    static int licznik =0;
    licznik++;
    printf("%d\n", licznik);
}


int main()
{
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    return 0;
}
