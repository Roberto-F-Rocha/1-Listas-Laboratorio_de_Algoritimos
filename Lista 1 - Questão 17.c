#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 17. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em
km/h (quilômetros por hora). A fórmula de conversão é 𝐾 = 𝑀 * 3. 6, sendo K a velocidade
em km/h e M em m/s.
*/

int main(){
	  setlocale(LC_ALL, ""); 
	
  	float ms, km;
	
	  printf("Informe a velocidade em m/s (metros por segundo): \n");
  	scanf("%f", &ms);
	
  	km = ms * 3.6; 
	
  	printf("Velocidade em km/h (kilometros por hora) é: %.1f\n\n", km);
	
	  system("pause");
 	 return(0);
}