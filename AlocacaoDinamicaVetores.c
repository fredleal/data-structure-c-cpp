#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){

    //E criado um ponteiro auxiliar
    int *aux;

    //Alocacao dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}

int main(){

int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor:");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereco de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

    //Coloca valores no vetor
    for(cont = 0; cont< tamanho; cont++){
        vetor[cont] =+10;

    }
    //Imprime vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    free(vetor);
return 0;
}
