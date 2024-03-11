/*
    Escreva um programa em C que encontre o fatorial de um número fornecido pelo usúrio
*/

#include <stdio.h>

int main()
{
    int num, fatorial = 1;

    printf("Escolha um numero para fatorar: ");
    scanf("%d", &num);

    for (int indice = 1; indice <= num; indice++)
    {
        fatorial *= indice;
    }

    printf("%d", fatorial);

    return 0;
}