#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 20. Leia um valor de volume em metros cúbicos (m³) e apresente-o convertido em
litros. A fórmula de conversão é 𝐿 = 1000 * 𝑀, sendo L o volume em litros e M o volume
em metros cúbicos.
*/

int main(){
	  setlocale(LC_ALL, ""); 
	  float mc,l;
	  
	  printf("valor de volume em metros cúbicos (m³):\n");
	  scanf("%f", &mc);
	  
	  l = 1000 * mc;
	  
	  printf("convertido para litros igual a: %.0fL\n\n", l);
	  
	  system("pause");
   return(0);
}