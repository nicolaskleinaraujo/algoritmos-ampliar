/*
    Escreva um programa em C que receba 10 numeros e o liste na tela de trás pra frente
*/

#include <stdio.h>

int main()
{
    int numeros[10];

    for (int indice = 0; indice <= 9; indice++) {
        printf("Digite o numero %d: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    for (int indice = 9; indice >= 0; indice--)
    {
        printf("%d\n", numeros[indice]);
    }
    
    return 0;
}