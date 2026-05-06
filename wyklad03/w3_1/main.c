#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 6, b = 5;
    a || b++;
    printf("%d\n", b);
}
