/*
    Escreva um programa que leia o nome, peso e altura de um atleta.
    O programa informar como saída o nome do atleta e seu IMC.
    Fórmula:   IMC = peso / altura²
    Obs.: Peso precisa ser em Kilograma e Altura deverá ser em metros.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;
    char nome[20];

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe seu peso em Kg: ");
    scanf("%f", &peso);

    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("%s, seu IMC e de %.2f", nome, imc);

    return 0;
}