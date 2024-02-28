#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que solicite do usuário um número
//inteiro qualquer e mostrar no terminal se o número
//informado é par ou ímpar.

int main() {
//	declarando variaveis
	int numero;

//solicitando dados
	printf("Digite um numero:  ");
	scanf("%i",&numero);
	
//	realizando calculos
	if (numero %2 == 0){
		printf("o numero e par");
		}else{
		printf("O numer e impar");	
	}
}
