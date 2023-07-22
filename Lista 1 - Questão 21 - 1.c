#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 21. Leia um valor de área em metros quadrados (m²) e apresente-o convertido em
hectares. A fórmula de conversão é 𝐻 = 𝑀 * 0. 0001, sendo M a área em metros quadrados
é H a área em hectares.
*/

int main(){
	  setlocale(LC_ALL, ""); 
	  float m,h;

	  printf("valor de área em metros quadrados (m²):\n");
	  scanf("%f", &m);
	  h = m * 0.0001;
	  printf("convertido em hectares %f\n\n", h);
	  
	  system("pause");
   return(0);
}