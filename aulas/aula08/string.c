#include <stdio.h>

int main() {

char string[30];

printf("Entre com seu nome: ");

printf("Ola %s!\n", string);

//string[2] = '\0';

scanf("%s", string);

for(int i=0; i<30; i++) {
    printf("%c", string[i]);
}




      return 0;
}