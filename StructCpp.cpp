#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta {
    string cor;
    string nome;

};

int main(){

    //criando um ponteiro para o struct criado
    fruta = *primeiraFruta = new fruta; //criando ponteiro q aponta para memoria alucada na struct fruta

    //modificando valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";


    //exibindo Valores
    cout << "Fruta" << primeiraFruta->nome << ", Cor:" <<primeiraFruta ->cor;

    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //Modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    //Percorrendo e exibindo
    int cont;
    for(cont= 0; cont < 2; cont++){

        cont << "\nFruta:" << ponteiroListaDeFrutas[cont].nome <<", Cor:" <<ponteiroListaDeFrutas[cont].cor;
    }


return 0;
}
