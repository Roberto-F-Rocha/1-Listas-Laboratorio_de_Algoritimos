#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 21. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é 𝑅 = 𝐺 * PI/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.
*/

int main(){
	  setlocale(LC_ALL, "");
	  float g, r;
	  
		printf("valor do ângulo em graus:\n");
		scanf("%f", &g);
		
		r = g * (3.141592/180);
		
		printf("convertido em radianos: %f\n\n", r);
		
	  system("pause");
   return(0); 
}