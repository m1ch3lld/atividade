#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo para ler dois n�meros.
//Em seguida, calcule a soma, a subtra��o, a multiplica��o e a divis�o
//desses n�meros, armazenando os resultados em vari�veis com os
//nomes listados abaixo:

int main (){
	
	//declarando variaveis
	float primeiroNumero, segundoNumero;
	float soma, subtracao, multiplicacao, divisao;
	
	//solicitando dados para o usuario
	printf("Digite o primeiro numero: ");
	scanf("%f", &primeiroNumero);
	
	printf ("Digite o segundo numero: ");
	scanf("%f", &segundoNumero);
	
	//realizando calculos 
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	system("cls || clear");
	
	//exibindo resultados
	printf("\n=== Exibindo reslultados ===\n");
	printf("Primeiro numero: %.1f \n", primeiroNumero);
	printf("Segundo numero %.1f \n", segundoNumero);
	printf("\nSoma: %.1f \n", soma);
	printf("subtracao: %.1f \n",subtracao);
	printf("multiplicacao: %.1f \n", multiplicacao);
	printf("Divisao: %.1f \n", divisao);
	 
	return 0;
}
	

