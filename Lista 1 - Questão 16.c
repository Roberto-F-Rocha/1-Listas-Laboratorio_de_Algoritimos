#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
Exercício 16. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus
Celsius. A fórmula de conversão é 𝐶 = 𝐾 − 273. 15, sendo C a temperatura em Celsius e K
a temperatura em Kelvin.
*/

int main(){
	  setlocale(LC_ALL, "");
	  float k = 0;
	  
	  printf("temperatura em graus Kelvin:\n");
	  scanf("%f", &k);
	  
	  printf("A temperatura em Celsius é: %.2f\n\n", k - 273.15);
  
	  system("pause");
   return(0);
}