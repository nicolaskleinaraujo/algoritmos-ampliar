/*
    Escreva um programa que receba a idade de 6 alunos e como saída retorne-os em ordem crescente.
*/

#include <stdio.h>

int main()
{
    int idades[6], temp;

    for (int indice = 0; indice <= 5; indice++)
    {
        do
        {
            printf("Digite uma idade: ");
            scanf("%d", &idades[indice]);
        } while (idades[indice] < 0);
    }

    for (int indice = 0; indice < 5; indice++)
    {
        if (idades[indice] > idades[indice + 1])
        {
            temp = idades[indice];
            idades[indice] = idades[indice + 1];
            idades[indice + 1] = temp;
        }
    }

    for (int indice = 0; indice <= 5; indice++)
    {
        printf("%d\n", idades[indice]);
    }

    return 0;
}