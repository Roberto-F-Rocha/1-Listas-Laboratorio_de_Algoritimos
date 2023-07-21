#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 18. Leia uma distância em milhas e apresente-a convertida em quilômetros. A
fórmula de conversão é 𝐾 = 1. 61 * 𝑀, sendo K a distância em quilômetros e M em milhas.
*/

int main(){
    setlocale(LC_ALL, ""); 
    float m, k; 
		 
    printf("distância em milhas:\n");
    scanf("%f", &m);
    k = 1.61 * m;
    printf("a distância em quilômetros é: %.2f\n\n", k);
    
    system("pause");
   return(0);
}