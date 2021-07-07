#include <stdio.h>
#include <stdlib.h>


int main(void){
int cont;

//Contando ate 10

for (cont=1; cont <= 10; cont++){

printf("\n 5 X %d = %d", cont, 5 * cont);


}

for (cont = 0; cont <= 10; cont = cont +2){
    printf("\n%d", cont);
}



system("pause");


}
