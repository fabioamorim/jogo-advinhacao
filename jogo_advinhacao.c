#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(){

	//Imprime o cabeçalho do jogo	
	printf("**********************************\n");
	printf("*Bem vindo ao jogo de advinhacao!*\n");
	printf("**********************************\n");

	int numSecreto = 42;
	int chute;

	for(int i=1;i<=NUMERO_DE_TENTATIVAS;i++){

		printf("\ntentativa %d de %d\n",i,NUMERO_DE_TENTATIVAS);
		printf("Qual e' o seu chute? ");
		scanf("%d",&chute);
		printf("\nSeu chute foi %d\n", chute);

		int acertou = chute == numSecreto;// Se verdadeiro retorna 1 se falso retorna 0.
		int maior = chute > numSecreto;
		int menor = chute < numSecreto;
		if(acertou){
			printf("Parabens, voce acertou!\n");
			printf("Voce e' um otimo jogador, tente de novo!\n");
			break;
		}else if(maior){
			printf("Seu chute e' maior que o numero secreto\n");
		
		}else if(menor){
			printf("Seu chute e' menor que o numero secreto\n");
		}
	}		



	printf("Fim de jogo!");
}