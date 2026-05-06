#include <stdio.h>
#define NAPIS "programowanie"

int main()
{
    char tab[] = NAPIS;
    const char *wsk = NAPIS;
    printf("adres napisu %p\n", "programowanie");
    printf("adres tab: %p\n", tab);
    printf("adres wsk: %p\n", wsk);
    printf("adres NAPIS-u: %p\n", NAPIS);
    return 0;
}
