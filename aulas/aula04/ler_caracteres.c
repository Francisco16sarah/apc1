#include <stdio.h>

int main(){

  char tecla = '\0'; // caracteres nulo
  
  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);

  getchar(); // limpar o \n

  printf("Você digitou: %c\n", tecla);

  printf("Digite outra tecla: ");
  deu_certo = scanf("%c", &tecla);

  getchar();
  
  printf("Voce digitou: %c\n", tecla);

  char nome[31];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("ola: %s\n", nome);



  return 0;
  }