#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){

    printf("\nO sucessor de %d eh %d", numero, numero + 1);
}
int retornaAntecessor(int numero){
    return numero - 1;
    }


int main(){

int a;

printf("Digite um valor: ");

scanf("%d", &a);

//chama a funcao
mostraSucessor(a);

printf("\nO antecessor de %d eh %d",a ,retornaAntecessor(a));

return 0;
}
