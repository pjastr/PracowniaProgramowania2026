#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nap1[] = "Hello\nWorld";
    char nap2[50] = "Hello\nWorld";
    printf("%zu\n", sizeof nap1);
    printf("%zu\n", strlen(nap1));
    printf("%zu\n", sizeof nap2);
    printf("%zu\n", strlen(nap2));
    return 0;
}
