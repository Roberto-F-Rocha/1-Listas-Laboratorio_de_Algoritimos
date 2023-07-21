#include <stdio.h> 
#include <stdlib.h> 

/*
Exercício 05. Crie um programa que leia um caractere e depois o imprima como um valor
inteiro.
*/

int main(){
	char caractere;
	
	scanf("%c", &caractere);
	
	printf("Caractere lido: %i\n", caractere);
	
	system("pause");
	return(0);
}