#include <stdio.h> 
#include <stdlib.h> 

/*
Exercício 02. Crie um programa que leia um número inteiro e depois imprima a mensagem
“Valor lido: ”, seguido do valor inteiro. Use apenas um comando printf().
*/

int main(){
	int numero = 0;
	
	scanf("%i", &numero);
	
	printf("Valor lido: %i\n", numero);
	
	system("pause");
	return(0);
}