/*
    Escreva um programa em C que receba o valor inicial aplicado em um investimento, quantos meses esse investimento
    ficará aplicado e o juros anual de rendimento.
    O programa deverá retornar como saída o valor total ao final dos meses e o lucro bruto obtido.

    Dica: use a biblioteca math.h com a função pow(), para calcular os juros compostos.
*/

// STANDARD INPUT OUTPUT . HEADER
#include <stdio.h>
#include <math.h>

int main()
{
    float capital, juros, valorTotal, lucroBruto;
    int meses;

    printf("Capital: ");
    scanf("%f", &capital);

    printf("Juros: ");
    scanf("%f", &juros);

    printf("Meses: ");
    scanf("%d", &meses);

    juros = juros / 100;
    valorTotal = capital * pow((1 + juros), meses);
    lucroBruto = valorTotal - capital;

    printf("%.2f --- %.2f", valorTotal, lucroBruto);

    return 0;
}