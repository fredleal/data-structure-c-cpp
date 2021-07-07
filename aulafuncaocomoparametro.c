#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\nA soma entre %d e %d eh %d", primeiroValor, segundoValor, primeiroValor + segundoValor);

}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}

int main(){

int a = 5, b = 7;


mostraSoma(a,b);

printf("\nA soma entre %d e %d eh %d", a, b, retornaSoma(a,b));


return 0;
}
