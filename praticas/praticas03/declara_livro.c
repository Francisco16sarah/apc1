#include <stdio.h>


int main(){

char ISBN[14] = "0000000000000";
  int num_paginas= 500;
  float preco= 155.00;
  int ano_publicacao= 2024;
 
  printf("ISBN: %s\n", ISBN);
 printf("Num. Paginas: %d\n", num_paginas);
  printf("preco: R$ %.2f\n", preco);
  printf("Publicado em: %d\n", ano_publicacao);

  

  return 0;
}