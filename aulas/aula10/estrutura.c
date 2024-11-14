#include <stdio.h>

int main(){
    struct contato_t {
    char nome[61];
    long int telefone;
    char email[61];
    };

    struct contato_t contato;

    printf("Entre com um nome de um contato: ");
    scanf("%[^\n]s", contato.nome);


    while(getchar() != '\n');
    printf(" Entre com o telefone de contato: ");
    scanf("%li", &contato.telefone);
    while (getchar() != '\n');
    printf("Entre com email de o contato: ");
    scanf("%[^\n]s", contato.email);
    while(getchar() != '\n');

    printf("Dados de contato: \n");
    printf("Nome....... %s\n", contato.nome);
    printf("Telefone....... %li\n", contato.telefone);
    printf("Email....... %s\n", contato.email); 

    struct contato_t outro_contato;
    outro_contato = contato;
    printf("Nome.......: %s\n", outro_contato.nome);
    printf("Telefone...: %li\n", outro_contato.telefone);
    printf("Email......: %s\n", outro_contato.email); 



    struct contato_t contatos [10];
    contatos[0] = contato;
    contatos[1] = contato;
    contatos[2] = contato;
    contatos[3] = contato;
    contatos[4] = contato;
    contatos[5] = contato;
    contatos[6] = contato;
    contatos[7] = contato;
    contatos[8] = contato;
    contatos[9] = contato;
    contatos[10] = contato;







return 0;

}