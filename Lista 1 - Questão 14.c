#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 14. Crie um programa que pede seu nome, endereço, CEP e telefone. Ele deve
imprimir seu nome completo na primeira linha, seu endereço na segunda, e o CEP e telefone
na terceira.
*/

int main(){
	  setlocale(LC_ALL, "");
	  
	  char nome[30], e[30];
	  int cep = 0, cel = 0;
	  
	  printf("Nome completo:\n");
	  gets(nome);

	  printf("\nEndereço:\n");
	  gets(e);

	  printf("\nCEP:\n"); 
	  scanf("%i", &cep);
	  
	  printf("\nTelefone\n");
	  scanf("%i", &cel);
	  
	  system("cls");
	  printf("\nNOME: %s\n\n", nome);
	  printf("ENDEREÇO: %s\n\n", e);
	  printf("CEP: %i\t", cep);
	  printf("TELEFONE: %i\n\n", cel);
	  
	  system("pause");
   return(0);
}