#include <stdio.h>
#include <stdlib.h>

struct Struktura {
  int pole1;
  double pole2;
  char pole3;
};

int main()
{
    int tab[] = {3,4,5};
    struct Struktura s1 = {3,4.5,'d'};
    struct Struktura s2 = {3,4.5,'d'};
    struct Struktura s3 = {3,4.5,'d'};
    struct Struktura tab2[] = {s1,s2,s3};
    struct Struktura tab3[] =
    {
        {3,4.5,'d'},{3,4.5,'d'},{3,4.5,'d'}
    };
    return 0;
}
