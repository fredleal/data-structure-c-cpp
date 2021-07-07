#include <stdio.h>
#include <stdlib.h>

//Definindo que a funcao existe
int retornaDez();

int main(){

    int a;

    //Passando o retorno de uma funcao para uma variavel
    a = retornaDez();

    //Imprimindo valor de a
    printf("\n%d", a);

    return 0;

}

//Funcao retorna 10
int retornaDez(){
return 10;

}
