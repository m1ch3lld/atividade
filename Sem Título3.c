#include <stdio.h>
#include <stdlib.h>

//Fa�a um algoritmo que solicite do usu�rio um n�mero
//inteiro qualquer e mostrar no terminal se o n�mero
//informado � par ou �mpar.

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
