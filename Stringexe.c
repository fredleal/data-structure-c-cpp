#include <stdio.h>
#include <stdlib.h>

int main(){
//Variaveis
char palavra[255];

//instrucao
printf("Digite uma palavra");

//Limpa o buffer
setbuff(stdin, 0);

//Le a String

fgets(palavra, 255, stdin);

//limpa as casas nao utilizadas
palavra[strlen(palavra)-1] = '\0';

//Imprime na tela
printf("%s", palavra);

//Pausa o programa apos executar

system("pause");



}
