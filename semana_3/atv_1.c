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

        if(indice == 1) {
            menor = idade;
            maior = idade;
        } else {
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
    printf("Menor idade: %d", menor);

    return 0;
}
