#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>

#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]){
    int cont;

    //imprime vetor
    for (cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }

}

int  busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    int cont;
    bool valorFoiEncontrado; //sem definir, =false

    //percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
            }
    }

    if (valorFoiEncontrado){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){

    int vetor[TAM] = { 1, 23, 44 ,56, 63, 72, 84, 90, 98};
    int valorProcurado;
    int posicao, posicaoEncontrada;
    int cont;

    imprime_vetor(vetor);

    printf("\nQual numero deseja encontrar? ");
    scanf("%d", &valorProcurado);

    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
            cout << "O valor foi encontrado na posicao: " << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado";
    }



    return 0;
}
