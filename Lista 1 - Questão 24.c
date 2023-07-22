#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Exercício 24. O cálculo do consumo de energia elétrica dos aparelhos de sua casa pode te
ajudar a economizar eletricidade e dinheiro. O consumo de energia elétrica dos aparelhos de
uma casa é obtido aplicando-se a fórmula 𝐶𝑜𝑛𝑠𝑢𝑚𝑜 = , em que t é o tempo em que o
(𝑡*𝑝)
1000
produto permanece ligado (horas mensais) e p é a potência do aparelho (em Watts).
*/

int main(){
    setlocale(LC_ALL,"");
    float h,p,c;
    
    printf("Horas diarias do aparelho ligado:\n");
    scanf("%f",&h);
    
    printf("Potencia do aparelho em Watts:\n");
    scanf("%f",&p);
    
    h*=30;
    c = (h * p) / 1000;
    
    system("clear||cls");
    printf("O consumo é de :%2f Kwh/mês\n\n",c);
    
    system("pause");
   return(0);
}
