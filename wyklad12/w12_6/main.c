#include <stdio.h>
#include <stdlib.h>

struct Struktura {
  int pole1;
  int pole2;
  char pole3;
};

int main()
{
    struct Struktura zmiennaS;
    zmiennaS.pole1 = 60;   /* przypisanie liczb do pól */
    zmiennaS.pole2 = 2;
    zmiennaS.pole3 = 'a';  /* a teraz znaku */
    return 0;
}
