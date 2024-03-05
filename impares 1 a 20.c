#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i;
	
	printf("Listando todos os numeros impares entre 1 e 20. \n\n");
	
	for(i = 1; i <= 20; i++) {
		if (i % 2 != 0){
			printf("%i \n", i);
		}
	}
	
	return 0;
}
