/*
Fa�a um programa que receba um n�mero inteiro.
Como sa�da, dever� exibir na tela se � par ou �mpar.
*/

#include <stdio.h>

int main () {

    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d",&numero);

    if (numero % 2 == 0) {
        printf("Par");
    }
    else {
        printf("Impar");
    }

    return 0;

}