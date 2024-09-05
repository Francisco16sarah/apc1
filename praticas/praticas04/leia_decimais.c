#include <stdio.h>
int main(){

  float preco = 0.0f;

  printf("Digite um preço: ");
  int deu_certo = scanf("%f", &preco);
  printf("Você digitou: %.2f\n", preco);

  double fracao = 0.0;
  printf("Digite uma fração: ");
  deu_certo = scanf("%lf", &fracao);
  printf("Você digitou: %.10f\n", fracao);

  



  return 0;
  }
