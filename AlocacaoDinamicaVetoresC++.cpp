#include <stdio.h>
#include <stdlib.h>
#include <new>

int main (){

    int tamanho, cont;
    printf("Digite o tamanho:");
    scanf("%d", &tamanho);

    //criando o ponteiro que recebe o novo vetor vazio
    int *vetor = new int [tamanho];

    //Modificando e impriomindo valores
    for(cont = 0; cont <tamanho ; cont++){
    vetor[cont] = cont;
    printf ("\n %d", vetor[cont]);

    }
free(vetor);
return 0;


}
