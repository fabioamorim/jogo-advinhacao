#include <stdio.h>

int main(){

	//Imprime o cabeçalho do jogo	
	printf("**********************************\n");
	printf("*Bem vindo ao jogo de advinhacao!*\n");
	printf("**********************************\n");

	int numSecreto = 42;
	int chute = 0;
	int tentativa = 1;
	double pontos = 1000;

	while(1){

		printf("\nTentativa numero:%d ",tentativa);
		printf("Qual e' o seu chute? ");
		scanf("%d",&chute);
		printf("\nSeu chute foi %d\n", chute);

		if(chute < 0){
			printf("Nao aceito numeros negativos!\n");
			continue;
		}

		int acertou = chute == numSecreto;// Se verdadeiro retorna 1 se falso retorna 0.
		int maior = chute > numSecreto;
		int menor = chute < numSecreto;
		if(acertou){
			printf("Voce e' um otimo jogador, tente de novo!\n");
			break;
		}else if(maior){
			printf("Seu chute e' maior que o numero secreto\n");
		
		}else if(menor){
			printf("Seu chute e' menor que o numero secreto\n");
		}

		double pontosPerdidos = (chute - numSecreto) /(double)2;
		pontos = pontos - pontosPerdidos;

		tentativa++;
	}	

	printf("Seu score: %.1f\n",pontos);
	printf("Parabe'ns, voce acertou na tentativa numero:%d\n",tentativa);
	printf("Fim de jogo!");

}