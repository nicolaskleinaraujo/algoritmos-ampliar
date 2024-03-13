/*
    Escreva um programa que receba 6 idades e informe quem é o mais novo e o mais velho
    Necessario, ainda, informar se essas duas idades (menor e maior) são maior ou menor que 18 anos.
*/

#include <stdio.h>

int main()
{
    int idade, menor, maior = 0;

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

    if (maior >= 18)
    {
        printf("Maior idade: %d\n", maior);
        printf("Ja e maior de idade!\n\n");
    }
    else
    {
        printf("Maior idade: %d\n", maior);
        printf("Ainda e menor de idade!\n\n");
    }

    if (menor >= 18)
    {
        printf("Menor idade: %d\n", menor);
        printf("Ja e maior de idade!");
    }
    else
    {
        printf("Menor idade: %d\n", menor);
        printf("Ainda e menor de idade!");
    }

    return 0;
}
