#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM], int topo){
    //auxiliar contador
    int cont;

    cout << "\n";

    //imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }

    cout << "Topo:" << topo;
}

bool pilha_vazia(int topo){
    if(topo == -1){
        return true;
    }
    else{
        return false;
    }
}

bool pilha_cheia(int topo){
    if(topo == TAM -1){
        return true;
    }
    else{
        return false;
    }
}

int pilha_tamanho(int topo){
    return topo + 1;
}

int pilha_get(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){
        cout << "A pilha esta vazia";
        return 0;
    }
    else{
        return pilha[*topo];
    }
}


void pilha_push(int pilha[TAM], int valor, int *topo){
    //Caso nao possa colocar mais valores
    if(pilha_cheia(*topo)){
        cout << "Pila Cheia!";
    }else{
        *topo = *topo +1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){
        cout << "A pilha ja esta vazia!";
    }else{
        cout << "Valor Removido: " << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo -1;
    }

}
void pilha_construtor(int pilha[TAM], int *topo){

    //Coloca o topo negativo para indicar pilha vazia
    *topo = -1;

        //auxiliar contador
    int cont;


    //imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        pilha[cont] = 0;
    }

}


int main(){

    int pilha[TAM] ;
    int topo, valorReritado;

    pilha_construtor(pilha, &topo);

    imprime_vetor(pilha, topo);

    //passagem por referencia para substituir valor em todo o codigo
    pilha_push(pilha, 5, &topo); //Empilha uma vez
    imprime_vetor(pilha, topo);

    cout << "Ultimo valor da pilha" << pilha_get(pilha, &topo);
    cout << "Tamanho da Pilha: " << pilha_tamanho(topo);

    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);


    pilha_push(pilha, 7, &topo);
    imprime_vetor(pilha, topo);


    pilha_pop(pilha, &topo);
    imprime_vetor(pilha, topo);


return 0;
}
