#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Exercício 29. Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação
ℎ = 𝑎² + 𝑏². Crie um programa que leia os valores de a e b, e calcule o valor da
hipotenusa através da fórmula dada. Imprima o resultado. Utilize a função sqrt( ) da
biblioteca <math.h> para o cálculo da raiz quadrada. Opcionalmente, você pode utilizar a
função pow( ) da mesma biblioteca para o cálculo da exponenciação.
*/

int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    float hipotenusa;
    
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Insira o segundo valor: ");
    scanf("%d", & num2);
    
    hipotenusa = sqrt ((num1 * num1) + (num2 * num2));
    
    printf("\nA hipotenusa dos valores é: %.2f\n\n", hipotenusa);
    
    system("pause");
    return(0);
}