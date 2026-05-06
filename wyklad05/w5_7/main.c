#include <stdio.h>

 int main (void)
 {
   int liczba = 5;
   printf("Wartosc zmiennej: %d\n", liczba );
   printf("Adres zmiennej: %p\n", &liczba );
   printf("Adres zmiennej: %#010x\n", &liczba );
   return 0;
 }
