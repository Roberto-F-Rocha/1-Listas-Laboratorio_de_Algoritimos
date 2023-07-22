#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 31. Crie um programa de ajuda para vendedores. A partir de um valor total lido,
mostre:

I. O total à vista com desconto de 10%;
II. O valor de cada parcela, no parcelamento de 3× sem juros;
III. A comissão do vendedor, no caso da venda ser à vista (5% sobre o valor com desconto);
IV. A comissão do vendedor, no caso da venda ser parcelada (3% sobre o valor total).
*/

int main(){
    setlocale(LC_ALL,"");
    
    float valor, vista, total;
    
		printf("valor total do produto:  ");
		scanf("%f", &valor);
		
		vista = valor - (valor * 0.10);
		printf("\ntotal à vista com desconto = R$ %.2f\n\n", vista);
		total = valor / 3;
		printf("valor pacelado em 3x sem juros = 3x de = R$ %.2f\n\n", total);
		printf("A comissão do vendedor, no caso da venda ser à vista (5 porcento sobre o valor com desconto) = R$ %.2f\n\n", vista*0.05);
		printf("A comissão do vendedor, no caso da venda ser parcelada (3 porcento sobre o valor com desconto) = R$ %.2f\n\n", total*0.03);
    system("pause");
   return(0);
}