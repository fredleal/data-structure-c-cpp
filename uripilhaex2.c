#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tNo{
        struct tNo *topo;
        long long nElementos;
}tNo;

typedef struct tPilha{

    tNo *topo;
}tPilha;

void pilha_push(tPilha *pilha, long long numero, int *topo);
void pilha_pop(tPilha *pilha);
void cria_Pilha(tPilha *pilha);
long long menor_DaPilha(tPilha *pilha);

int main()
{
    tPilha pilha;
	char operacao[10];
	unsigned numOperacoes;
	long long numero, tmp;

	scanf("%u", &numOperacoes);

	cria_Pilha(&pilha);

	while (numOperacoes--)
	{

		scanf("%s", operacao);

		if (strcmp(operacao, "PUSH") == 0)
		{

			scanf("%lld", &numero);
			pilha_push(&pilha, numero);

		}
		else if (strcmp(operacao, "POP") == 0)
			pilha_pop(&pilha);
		else
		{

			tmp = menor_DaPilha(&pilha);
			if (tmp == -1)
				printf("EMPTY\n");
			else
				printf("%lld\n", tmp);

		}

	}

}

void cria_Pilha(tPilha *pilha)
{
	pilha->topo = NULL;
}

void pilha_push(tPilha *pilha, long long numero, int *topo)
{
        *topo = *topo +1;
        pilha[*topo] = numero;
}

void pilha_pop(tPilha *pilha, int *topo)
{
        *topo = *topo -1;
}

long long menor_DaPilha(tPilha *pilha)
{
    long long aux;

    tNo = *aux;
    aux = pilha[*topo];

    if(!aux)
        return -1;

    long long menor = aux -> numero;

    while(aux)
    {
        if (aux ->numero < menor)
        {
        menor = aux->numero;
        }

        aux = aux[*topo];
    }
    return menor;

}



