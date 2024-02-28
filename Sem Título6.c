#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que solicite do usuário um valor
//qualquer e mostre na tela com um reajuste de 10%.

int main() {
//	declarando variaveis
	float numero, valor;
	
//	solicitando dados
	printf("Digite o numero: \n");
	scanf("%f", &numero);
	
//	realizando calculos
	valor = numero * 1.1;
	
//	exibindo resultados
	system("cls || clear");
	printf(" === Resultados === \n");
	printf("salario: %.2f \n", numero);
	printf("valor: %.2f \n", valor);
	
	return 0;
}
