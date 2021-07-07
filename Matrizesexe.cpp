#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

//Funcao principal do programa

int main(){

/*
vetor= [0] [1] [2]

matriz= [0.0] [0.1] [0.2]
        [1.0] [1.1] [1.2]

*/
//Criando uma matriz 2x2
int matriz[2][2], i, j;

//passando valores
matriz[0][0] = 1;
matriz[0][1] = 2;
matriz[1][0] = 3;
matriz[1][1] = 4;

//Imprimindo valor na tela
for(i = 0; i <2; i++){
    for(j = 0; j < 2; j++){

        //cout << "\ni = "<< i <<" , j = " <<j;
        cout <<"\n" << matriz[i][j]*2<< " ";
    }
cout <<"\n";
}
//Pausa o programa aWorking Effectively with Legacy Codepos executar
return 0;

}
