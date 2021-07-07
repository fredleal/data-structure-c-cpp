#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>





int main(){

    //Variavel
    int a = 20;

    //Imprimindo o endereco de uma variavel
    printf("Valor de a: %d",a);

    //Imprimindo o endereco de uma variavel
    printf("Endereco de a: %d \n", &a);

    //Lendo o valor de uma variavel
    scanf("%d", &a);

    //Imprimindo o valor de uma variavel

    //VARIAVEIS AMAZENAM VALORES
    int b = 10;
    //PONTEIROS ARMAZENAM POSICOES DA MEMORIA
    int *ponteiro;
    //PONTEIRO RECEBENDO A POSICAO NA MEMORIA DA VARIAVEL b
    ponteiro = &b;

    //Imprimindo o valor de uma variavel
    printf("Valor de b: %d \n", b);

    // * pode ser lido como"Conteudo apontado por"
    *ponteiro = 40;

    //Imprimindo o valor de uma variavel
    printf("Valor de b: %d \n", b);

return 0;
}
