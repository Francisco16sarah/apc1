#include <stdio.h>

int main() {
  printf("==============================\n");
  printf("          NOTA LEGAL\n"            );
   printf("==============================\n");
  printf("Produto\t\t\tQtd\tValor Unit\n");
  printf("%-15s\t%03d\t\t%0.2f\n", "Camiseta", 2, 39.99);
  printf("%-15s\t%03d\t\t%.2f\n", "Calca", 1, 89.90);
  printf("%-15s\t%03d\t\t%.2f\n", "Meia Social", 3, 19.99);
  printf("==============================\n");
  printf("Total:\t\t\t\t\t%.2f\n", 229.85);

  
  return 0;
  }