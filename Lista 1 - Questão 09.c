#include <stdio.h>
#include <stdlib.h>

/*
Exercício 09. Crie um programa que leia um número inteiro e apresente seu antecessor e seu
sucessor.
*/

int main(){
    int n1 = 0;
    
    printf("digite um número: ");
    
    scanf("%i", &n1);
    
    printf("antecessor %i sucessor %i\n\n", n1-1, n1+1);
    
    system("pause");
   return(0);
}