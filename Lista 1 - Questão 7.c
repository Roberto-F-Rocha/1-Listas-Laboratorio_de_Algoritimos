#include <stdio.h>
#include <stdlib.h>

/*
Exercício 07. Crie um programa que leia dois valores do tipo float. Use um único comando
de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.
*/

int main(){
	float n1, n2;
	
  printf("digite dois numeros :\n\n");
  
	scanf("%f %f", &n1,&n2);
	
	printf("ordem inversa: %f %f\n\n", n2,n1);
	
	system("pause");
	return (0);
}