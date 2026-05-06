#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *p = &a;
    free(p);    // B£¥D! Próba zwolnienia wskaŸnika do zmiennej automatycznej
    return 0;
}
