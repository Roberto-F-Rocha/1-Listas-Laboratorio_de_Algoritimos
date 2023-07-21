#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 19. Leia um valor de comprimento em polegadas e apresente-o convertido em
centímetros. A fórmula de conversão é 𝐶 = 𝑃 * 2. 54, sendo C o comprimento em
centímetros e P o comprimento em polegadas.
*/

int main(){
  	setlocale(LC_ALL, ""); 
  	float p,c;
  	printf("valor de comprimento em polegadas:\n");
  	scanf("%f", &p);
  	c = p * 2.54;
  	printf("convertido para centimetros: %.1f\n", c);
  	
  	system("pause");
 	 return(0);
}