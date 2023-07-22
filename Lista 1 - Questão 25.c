#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 25. Crie um programa que leia o valor de um produto e imprima-o com desconto
de 12%.
*/

int main(){
    setlocale(LC_ALL,"");
    float v, d;
    
    printf("valor de um produto:\n");
    scanf("%f", &v);
    
    d= v - (v * 0.12);

    printf("valor com o desconto: %.2f\n\n", d);
    
    system("pause");
   return(0);
}