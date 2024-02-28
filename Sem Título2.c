#include <stdio.h>
#include <stdlib.h>

//Elabore um algoritmo que solicita do usuário: o nome de um aluno,
//sua idade e quatro notas.
//Calcule a média aritmética do aluno armazenando o resultado em
//uma variável.

int main() {
	
//	declarando variaveis
	char nome [200] ;
	int idade ;
	float nota1 , nota2 , nota3 , nota4, media ;
	
//	solicitando dados para o usuario
	printf("Digite o nome do aluno: \n");
	scanf("%s", &nome);
	system("cls || clear");
	
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	system("cls || clear");
	
	printf("Primeira nota: \n");
	scanf("%f", &nota1);
	system("cls || clear");
	
	printf("Segunda nota: \n");
	scanf("%f", &nota2);
	system("cls || clear");
	
	printf("Terceira nota: \n");
	scanf("%f", &nota3);
	system("cls || clear");
	
	printf("Quarta nota: \n");
	scanf("%f", &nota4);
	system("cls || clear");
	
//	realizando calculos
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
//	exibindo resultados
	system("cls || clear");
	printf("\n=== Exibindo resultados ===");
	printf("\n Nome %s", nome);
	printf("\n Idade %i", idade);
	printf("\n Nota1 %.2f", nota1);
	printf("\n Nota2 %.2f", nota2);
	printf("\n Nota3 %.2f", nota3);
	printf("\n Nota4 %.2f", nota4);
	printf("\n Media %.2f", media);
	
	return 0;
	
}
