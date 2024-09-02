#include <stdio.h>


int main(){

  char matricula[11]="2412140027";
  int idade = 30;
  float altura = 1.75f;
  float peso = 79.5f;
  char sexo = 'M';
  
  printf("Matricula: %s\n", matricula);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f m\n", altura);
  printf("Peso: %.1f Kg\n", peso);
  printf("Sexo: %c\n", sexo);
  

  return 0;
  }