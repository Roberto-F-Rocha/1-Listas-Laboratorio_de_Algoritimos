#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 13. Crie um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.
*/

int main(){
	  setlocale(LC_ALL, "");
  	int ano, idade;
	
	  printf("sua idade:\n");
    scanf("%i", &idade);
  	printf("ano atual:\n");
  	scanf("%i", &ano);
  	printf("\nvocê nasceu em %i\n\n", ano-idade);
  	
  	system("pause");
	return(0);
}