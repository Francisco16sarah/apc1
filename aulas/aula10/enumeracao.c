#include <stdio.h>

int main(){

    const int domingo = 1;
    const int segunda = 2;
    const int terca = 3;
    const int quarta = 4;
    const int quinta = 5;
    const int sexta = 6;
    const int sabado = 7;

enum dia_da_semana {
    dom,
    seg,
    ter,
    qua,
    qui,
    sex,
    sab,
};

  enum boolean {false, true};


 int dia;
 printf("Entre com o dia da semana: ");
 scanf("%i", &dia);

 switch(dia){

    case dom: printf("Domingo\n"); break;
    case seg: printf("Segunda\n"); break;
    case ter: printf("Terca\n"); break;
    case qua: printf("Quarta\n"); break;
    case qui: printf("Quinta\n"); break;
    case sex: printf("Sexta\n"); break;
    case sab: printf("Sabado\n"); break;
default : printf("Dia invalido\n");

 }




    return 0;
}