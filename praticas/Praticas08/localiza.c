#include<stdio.h>

int main(){

int numeros [10];
int numero = 0 ;
int achou = -1;
for (int i=0; i<10; i++) {
 
 if (numeros[i] == numero) {
  achou = i;
}
   



}

scanf("%i" &numero);
for(int i=0; i<10; i++) { 
    scanf("%i" &numeros[i]);

}



    return 0;
}