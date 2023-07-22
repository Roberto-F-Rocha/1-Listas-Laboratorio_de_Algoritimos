#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
Exercício 30. Crie um programa que solicite 2 números reais e informe:

I. A soma dos números;
II. O produto do primeiro número pelo quadrado do segundo;
III. O quadrado do primeiro número;
IV. A raiz quadrada dos números;
V. O seno da diferença do primeiro número pelo segundo;
VI. O módulo do primeiro número.

Para isso, utilize as funções pow( ) para cálculo da exponenciação, sqrt( ) para o cálculo da
raiz quadrada, sin( ) para cálculo do seno e abs( ) para cálculo do módulo. Todas as funções
citadas pertencem a biblioteca <math.h>.
*/

int main(){
    setlocale(LC_ALL,"");
  	int n1,n2;
  	
  	printf("informe dois numeris reais\n\n");
  	printf("primeiro número: ");
  	scanf("%i", &n1);
  	
  	printf("\nsegundo número: ");
  	scanf("%i", &n2);
  	
  	printf("\nsoma dos dois números: %i\n\n", n1+n2);
  	printf("O produto do primeiro número pelo quadrado do segundo é: %i\n\n", n1*(n2*n2));
  	printf("O quadrado do primeiro número: %i\n\n", n1*n1);
 	  printf("A raiz quadrada dos números: primiro numero %f, segundo numero %f\n\n", sqrt(n1), sqrt(n2));
  	printf("O seno da diferença do primeiro número pelo segundo: %f\n\n",sin(n1-n2));
  	printf("O módulo do primeiro número: %i\n\n", abs(n1));
  	
    system("pause");
   return(0);
}