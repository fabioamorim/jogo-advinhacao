#include <stdio.h>

int main(){

	//Imprime o cabeçalho do jogo	
	printf("**********************************\n");
	printf("*Bem vindo ao jogo de advinhacao!*\n");
	printf("**********************************\n");

	int num_secreto = 42;
	int chute;

	printf("Qual e' o seu chute? ");
	scanf("%d",&chute);
	printf("\nSeu chute foi %d\n", chute);

	int acertou = (chute == num_secreto);// Se verdadeiro retorna 1 se falso retorna 0.

	if(acertou){
		printf("Parabens, voce acertou!\n");
		printf("Voce e' um otimo jogador, tente de novo!\n");
	}else{

		printf("Que pena, voce errou. ");

		int maior = chute > num_secreto; 

		if(maior){
			printf("Seu chute e' maior que o numero secreto\n");
		}else{
			printf("Seu chute e' menor que o numero secreto\n");
		}

	}


	printf("Fim de jogo!");
}