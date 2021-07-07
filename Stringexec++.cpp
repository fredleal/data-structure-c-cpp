#include <stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

//nao precisa mais de std::
using namespace std;

//Funcao principal do programa
int main(){
    //Definindo uma string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra";

    //Lendo uma sting
    cin >> palavra;
    //Imprimindo uma variavel
    cout << "\nA palavra e:" << palavra;

    //Pausa o programa apos executar
    return 0;


}
