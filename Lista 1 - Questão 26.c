#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 26. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa
que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que
deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
*/

int main(){
    setlocale(LC_ALL,"");
    int dias,diaria;
    float desconto, pagamento;
    
    diaria = 30;
    desconto = 0.08;
    
		printf("quantos dias o encanador trabalhou?\n"); 
		scanf("%i", &dias);
		
    pagamento = diaria * dias;
    pagamento -= pagamento * desconto;
  	
  	printf("quantia líquida que deverá ser paga: %.2f\n\n", pagamento);
  	
    system("pause");
   return(0);
}