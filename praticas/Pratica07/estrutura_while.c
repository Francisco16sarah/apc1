#include <stdio.h>

int main () {

int nota = 0;
   
   while(nota < 1 || nota > 10) 
     scanf("%i", &nota);
   { 
    while (getchar() != '\n');
printf("Nota invalida. Tente novamente!\n");
scanf("%i", &nota);

   }

   


     return 0;
}