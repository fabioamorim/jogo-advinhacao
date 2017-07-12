#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	//Imprime o cabeçalho do jogo	
	printf("**********************************\n");
	printf("*Bem vindo ao jogo de advinhacao!*\n");
	printf("**********************************\n");

	int segundos = time(0);// pega a data em segundos desde 01/abril/1970 até o momento.
	srand(segundos);// gerando a semente para o número randômico.
	int nivel;
	int i=0;
	int acertou = 0;
	int numGrande= rand();
	int numDeTentativas;
	int numSecreto = numGrande % 100;
	int chute = 0;
	int tentativa = 1;
	double pontos = 1000;

	printf("Qual o nivel de dificuldade pretende jogar?\n");
	printf("(1) Facil (2) Medio (3) Dificil\n\n");
	printf("Escolha: ");
	scanf("%d",&nivel);

	switch(nivel){
		case 1:
			numDeTentativas = 20;
			break;
		case 2:
			numDeTentativas = 10;
			break;
		case 3:
			numDeTentativas = 5;
		
		default:
			printf("Nivel invalido!Ira para o facil!");
			numDeTentativas = 20;
			break;
	}

	for(i = 1;i <= numDeTentativas;i++){

		printf("\nTentativa numero:%d ",tentativa);
		printf("Qual e' o seu chute? ");
		scanf("%d",&chute);
		printf("\nSeu chute foi %d\n", chute);

		if(chute < 0){
			printf("Nao aceito numeros negativos!\n");
			continue;
		}

		acertou = chute == numSecreto;// Se verdadeiro retorna 1 se falso retorna 0.
		int maior = chute > numSecreto;
		int menor = chute < numSecreto;
		if(acertou){
			break;
		}else if(maior){
			printf("Seu chute e' maior que o numero secreto\n");
		
		}else if(menor){
			printf("Seu chute e' menor que o numero secreto\n");
		}

		double pontosPerdidos = abs(chute - numSecreto) /(double)2;
		pontos = pontos - pontosPerdidos;

		tentativa++;

	}	

	if(acertou){
		printf("Voce ganhou!\n");
		printf("Seu score: %.1f\n",pontos);
		printf("Parabe'ns, voce acertou na tentativa numero:%d\n",tentativa);
		printf("Fim de jogo!");
	}else{
		printf("Voce perdeu!Tente de novo.");
	}

	

}