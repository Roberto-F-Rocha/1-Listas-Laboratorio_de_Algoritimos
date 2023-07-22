#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 22. Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π * raio2 , sendo π = 3.141592.
*/

int main(){
	  setlocale(LC_ALL, "");
	  float raio, v;
    
    printf("informe o raio do circulo:\n");
    scanf("%f", &raio);
		
		v = 3.141592*raio*raio; 
		
		printf("área do círculo correspondente é: %.2f\n\n", v);
		
	  system("pause");
   return(0); 
}