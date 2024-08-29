#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {
  printf("O tipo 'char' ocupa %lu byte(s) na memória.\n", sizeof(char));

  printf("O tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));

  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));

  printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));

  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));

  printf("\n");

  printf("o tamanho do char vai de %i ate %i\n", CHAR_MIN, CHAR_MAX);
   printf("o tamanho do int vai de %i ate %i\n", INT_MIN, INT_MAX);
   printf("o tamanho do float vai de %E ate %E\n", FLT_MIN, FLT_MAX);
   printf("o tamanho do double vai de %E ate %E\n", CHAR_MIN, CHAR_MAX);
  printf("\n");
   printf("o tamanho do short int na memoria eh %lu byte(s)\n", sizeof(short int));
  printf("o tamanho do long int na memoria eh %lu byte(s)\n", sizeof(short int));

  
  printf("\n");
  printf("a faixa de valores do short int vai de %i ate %i\n", SHRT_MIN, SHRT_MAX); 
  printf("a faixa de valores do long int vai de %i ate %li\n", LONG_MIN, LONG_MAX);
  printf("a faixa de valores do LONG int vai de %LE ate %LE\n", LDBL_MIN, LDBL_MAX); 
  
  
  printf("\n");
  printf("o tamanho do unsigned char vai de %i ate %i\n", 0, UCHAR_MAX);
  printf("o tamanho do unsigned short int vai de %i ate %i\n", 0, USHRT_MAX);
   printf("o tamanho do unsigned int vai de %i ate %u\n", 0, UINT_MAX);
   printf("o tamanho do unsigned long int vai de %i ate %lu\n", 0, ULONG_MAX);
  

  
  return 0;
}
