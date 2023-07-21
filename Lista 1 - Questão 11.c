#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 11. Crie um programa que leia quatro valores do tipo float. Calcule e exiba a média
aritmética desses valores.
*/

int main(){
    setlocale(LC_ALL, "");
    float n1, n2, n3, n4;
    
    printf("Digite quatro números: \n");
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    printf("\nA média aritmética é: %.2f\n\n", (n1+n2+n3+n4)/4);
    
    system("pause");
   return(0);
}