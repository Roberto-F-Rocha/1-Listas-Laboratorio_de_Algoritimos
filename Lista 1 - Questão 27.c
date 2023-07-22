#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 27. Crie um programa que leia o valor da hora de trabalho (em reais) e o número
de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10%
sobre o valor calculado
*/

int main(){
    setlocale(LC_ALL,"");
    
    float ht, htm, valor;
    //ht -> horas trabalhadas;
    //htm -> horas trabalhadas no mês;
    
    printf("valor da hora de trabalho (em reais):\n");
    scanf("%f", &ht);
    
  	printf("total de horas trabalhadas no mês:\n");
  	scanf("%f", &htm);
  	
  	valor = ht * htm;
  	valor += valor * 0.10;
  	
  	printf("valor a ser pago ao funcionário %.2f\n\n", valor);
  	
    system("pause");
   return(0);
}