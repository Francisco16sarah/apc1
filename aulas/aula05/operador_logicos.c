#include <stdio.h>

int main(){

  // E logico
  int p = 0;
  int q = 0;
  printf("%i E %i = %i\n", p, q, p && q);
  q = 1;
  printf("%i E %i = %i\n", p, q, p && q);
  p = 1;
  q = 0;
  printf("%i E %i = %i\n", p, q, p && q);
  q = 1;
  printf("%i E %i = %i\n", p, q, p && q);
  
  //1<x<10
  // 1<x && x <10
  
  // Ou logico
  p = 0;
  q = 0;
  printf("%i OU %i = %i\n", p, q, p || q);
  q = 1;
   printf("%i OU %i = %i\n", p, q, p || q);
  p = 1;
  q = 0;
   printf("%i OU %i = %i\n", p, q, p || q);
  q = 1;
   printf("%i OU %i = %i\n", p, q, p || q);
  
  // Nao logico
  p = 0;
  printf("NAO %i = %i\n", p, !p);
  printf("NAO %i = %i\n", q, !q);

  
  

   return 0;
  }