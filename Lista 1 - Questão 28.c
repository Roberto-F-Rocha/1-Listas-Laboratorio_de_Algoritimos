#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 28. A importância de R$780.000,00 será dividida entre três ganhadores de um
concurso, sendo que:

I. O primeiro ganhador receberá 46% do total.
II. O segundo receberá 32% do total.
III. O terceiro receberá o restante.

Crie um programa que calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

int main(){
    setlocale(LC_ALL,"");
    
    float p1,p2;
    
    p1= 0.46*780.000;
    printf("primeiro colocado %.3f\n\n", p1);
    
    p2= 0.32*780.000;
    printf("segundo colocado %.3f\n\n", p2);
    
    printf("terceiro colocado %.3f\n\n", p1-p2);
  	
    system("pause");
   return(0);
}