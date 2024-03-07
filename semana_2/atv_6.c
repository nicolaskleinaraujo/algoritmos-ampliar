/*
    Escreva um codigo e exiba na tela um menu com as opções:
    
    1. somar 2 numeros
    2. multiplicar 2 numeros
    3. encerrar

    o programa só podera ter finalizado quando o usuario escolher a opção 3
*/

#include <stdio.h>

int main() {
    int choice;
    float n1 = 0, n2 = 0, resultado = 0;

    while (choice != 3) {
        printf("ESCOLHA UMA OPCAO\n");
        printf("1 - SOMAR 2 NUMEROS\n");
        printf("2 - MULTIPLICAR 2 NUMEROS\n");
        printf("3 - ENCERRAR\n");
        printf("OPCAO: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:

            printf("Escolha o primeiro numero: ");
            scanf("%f", &n1);

            printf("Escolha o segundo numero: ");
            scanf("%f", &n2);

            resultado = n1 + n2;
            printf("%.2f\n", resultado);

            break;

        case 2:
        
            printf("Escolha o primeiro numero: ");
            scanf("%f", &n1);

            printf("Escolha o segundo numero: ");
            scanf("%f", &n2);

            resultado = n1 * n2;
            printf("%.2f\n", resultado);

            break;

        default:
            printf("OPCAO INVALIDA!");
            break;
        }
    }

    return 0;
}