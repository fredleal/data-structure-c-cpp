#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#include <new>

//Aloca um vetor do tamanho pedido
int* alocaVetor(int tam){
    //cria um ponteiro auxiliar
    int *v;

    //Aloca memoria para o novo vetor
    v = (int *) malloc(tam * sizeof(int));
    return v;
}

//Imprime a lista sequencial
void imprimeSequencial(int *vetor, int tamListaSequencial){

    int cont;
    for (cont = 0; cont < tamListaSequencial; cont++){
            printf("\nValor %d: %d\n", cont, vetor[cont]);
    }

}

int main(){

    //variaveis
    int vetor[TAM] = {1,2,3}, cont, tamLista;

    //exibindo valores
    for (cont = 0; cont < TAM; cont++){
            printf("\nValor %d: %d", cont, vetor[cont]);
    }

    imprimeSequencial(vetor, 3);

    for (cont = 0; cont < TAM; cont++){
            scanf("%d", &vetor[cont]);
    }

    imprimeSequencial(vetor, 3);

    //Pedindo tamanho do vetor
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamLista);

    //Ponteiro para um novo vetor
    int *vetorLidoNaHora;
    vetorLidoNaHora = alocaVetor(tamLista);

    for (cont = 0; cont < tamLista; cont++){
            scanf("%d", &vetorLidoNaHora[cont]);
    }

    imprimeSequencial(vetorLidoNaHora,tamLista);

    //Criando com C++
    int *vetorEmCPlusPlus = new int[5];

    //Lendo novos valores
    for (cont = 0; cont < tamLista; cont++){
            scanf("%d", &vetorLidoNaHora[cont]);
    }

    imprimeSequencial(vetorLidoNaHora,5);

    return 0;
 }

