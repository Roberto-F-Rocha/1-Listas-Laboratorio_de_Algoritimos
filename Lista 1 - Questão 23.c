#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 23. Leia a altura e o raio de um cilindro circular e imprima o volume desse
cilindro. O volume de um cilindro circular é calculado por meio da fórmula
𝑉 = π * 𝑟𝑎𝑖𝑜² * 𝑎𝑙𝑡𝑢𝑟𝑎, em que π = 3.141592.
*/

int main(){
	  setlocale(LC_ALL, "");
	  float altura, raio, v;
	  
    printf("informe a altura do cilindro circular:\n");
    scanf("%f", &altura);
    
    printf("informe o raio do cilindro circular:\n");
    scanf("%f", &raio);
		
		v = 3.141592*raio*raio*altura; 
		
		printf("O volume do cilindro circular é de: %.2f\n\n", v);
		
	  system("pause");
   return(0); 
}