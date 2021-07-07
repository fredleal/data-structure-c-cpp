#include<stdio.h>
#include<stdlib.h>


int main() {
	//Definindo variáveis
	int a = 1 , b = 10;


	//Contando até 10
	while (a <= 10) {
		//Imprimindo 'a' na tela
		printf("\n %d", a);
		//incremento
		a = a + 2;
	}
	//contagem regressiva
	while (b >= 1) {
		//imprimindo 'b' na tela
		printf("\n %d", b);

		//incremento
		b = b - 1;
	}
	system("pause");

	}
