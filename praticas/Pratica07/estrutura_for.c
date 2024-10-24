#include <stdio.h>

int main () {

   for(int i=0; i<10; i++) {
printf("%i ", i);

}
for(int i=10; i>0; i--) {
    printf("%i ", i);

}

for(;;) {
    printf("Ao infinito e alem!\n");


}

while(nota < 1 || nota > 10) {
    printf("Nota invalida. Tente novamente!\n");
scanf("%i", &nota);


}

    return 0;
}