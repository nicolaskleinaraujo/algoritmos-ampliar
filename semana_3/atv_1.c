/*
    Escreva um programa que receba 6 idades e informe quem é o mais novo e o mais velho
    Necessario, ainda, informar se essas duas idades (menor e maior) são maior ou menor que 18 anos.
*/

#include <stdio.h>

int main()
{
    int idade, menor, maior;

    for (int indice = 1; indice <= 6; indice++)
    {
        printf("Informe a %d idade: ", indice);
        scanf("%d", &idade);

        if (indice == 1)
        {
            menor = idade;
            maior = idade;
        }
        else
        {
            if (idade > maior)
            {
                maior = idade;
            }

            if (idade < menor)
            {
                menor = idade;
            }
        }
    }

    printf("Maior idade: %d\n", maior);
    if (maior >= 18)
    {
        printf("Ja é maior de idade!\n");
    }
    else
    {
        printf("Ainda é menor de idade!\n");
    }

    printf("Menor idade: %d\n", menor);
    if (menor >= 18)
    {
        printf("Ja é maior de idade!");
    }
    else
    {
        printf("Ainda é menor de idade!");
    }

    return 0;
}
