#include <stdio.h>
#include <stdlib.h>

//Fa�a um algoritmo que solicite do usu�rio o valor do
//sal�rio de um usu�rio, calcule quantos sal�rios
//m�nimos esse usu�rio ganha e imprima na tela o
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
