#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que solicite do usuário um número
//inteiro e mostre na tela o seu antecessor e o seu
//sucessor.

int main () {
//	declarando variaveis
	int numero, sucessor, antecessor;
	
//	solicitando dados
	printf("Digite o numero: ");
	scanf("%i", &numero);
	system("cls || clear");
	
//	realizando calculos
	sucessor = numero + 1;
	antecessor = numero - 1;
	
//	exibindo resultados
	system("cls || clear");
	printf(" === Resultado ===\n");
	printf("Numero %i \n", numero);
	printf("Sucessor %i \n", sucessor);
	printf("Antecessor %i \n", antecessor);
	
}
