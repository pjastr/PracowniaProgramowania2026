#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // zamiast nazwy plik.txt mo¿na u¿yæ innej wraz ze œcie¿k¹ dostêpu
   fptr = fopen("plik.txt", "w");

   if(fptr == NULL)
   {
      printf("Blad!");
      exit(1);
   }

   printf("Podaj liczbe: ");
   scanf("%d", &num);

   fprintf(fptr, "%d", num);
   fclose(fptr);

   return 0;
}
