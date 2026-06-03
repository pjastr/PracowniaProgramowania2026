#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("plik.txt", "r")) == NULL) {
       printf("Blad otwarcia pliku!");

       // Koniec dzia³ania - zwracamy b³¹d numer -1
       exit(-1);
   }

   fscanf(fptr,"%d", &num);

   printf("Liczba wczytana z pliku to: %d", num);
   fclose(fptr);

   return 0;
}
