#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que solicite do usuário o valor do
//salário de um usuário, calcule quantos salários
//mínimos esse usuário ganha e imprima na tela o
//resultado.

int main () {
//	declarando variaveis
	float salarioMin=1412.00 , salario;
	float qntSalario;
	
//	solicitando dados
	printf("Digite o seu salario: \n");
	scanf("%f",&salario);
	
//	realizando calculos
	qntSalario = salario / salarioMin;
	
//	exibindo resultados
	system("cls || clear");
	printf(" === Resultado ===");
	printf("Salario: %f \n", salario);
	printf("Salario minimo: %f \n", salarioMin);
	printf("Quantos salarios minimos ganaha: %.2f \n", qntSalario);
	
	
}
