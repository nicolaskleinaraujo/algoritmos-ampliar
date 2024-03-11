/*
    Faça um algoritmo em C que apresente um menu de opções para o usuário. Dentre as opções,
    terá: soma, subtração, multiplicação, divisão e raiz quadrada. Ao escolher o tipo de
    operação aritmética, o usuário deverá entrar com um ou mais valores para realizar os
    cálculos. Este programa só poderá ser encerrado se o usuário escolher a opção 0 no menu.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int opcao, continuar = 1;
    float resultado = 0, numero;

    while (opcao != 0)
    {
        printf("--------------------------------------\n");
        printf("0 - SAIR\n1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n5 - RAIZ QUADRADA\n");
        printf("OPCAO: ");
        scanf("%d", &opcao);
        printf("--------------------------------------\n");

        switch (opcao)
        {
        case 0:
            printf("OBRIGADO POR UTILIZAR O SISTEMA");
            break;

        case 1:
            while (continuar != 0)
            {
                printf("ADICIONE UM NUMERO: ");
                scanf("%f", &numero);

                if (resultado == 0)
                {
                    resultado += numero;
                }
                else if (resultado != 0)
                {
                    resultado += numero;
                    printf("ADICIONAR MAIS UM NUMERO? [0 NAO, 1 SIM] ");
                    scanf("%d", &continuar);
                }
            }

            printf("A SOMA RESULTOU EM: %.2f\n", resultado);
            resultado = 0;
            numero = 0;
            continuar = 1;

            break;

        case 2:
            while (continuar != 0)
            {
                if (resultado == 0) {
                    printf("ADICIONE UM NUMERO: ");
                    scanf("%f", &resultado);
                }

                printf("MENOS: ");
                scanf("%f", &numero);

                resultado -= numero;

                printf("ADICIONAR MAIS UM NUMERO? [0 NAO, 1 SIM] ");
                scanf("%d", &continuar);
            }

            printf("A SUBTRACAO RESULTOU EM: %.2f\n", resultado);
            resultado = 0;
            numero = 0;
            continuar = 1;

            break;

        case 3:
            while (continuar != 0)
            {
                printf("ESCOLHA UM NUMERO: ");
                scanf("%f", &resultado);

                printf("MULTIPLICADO POR: ");
                scanf("%f", &numero);

                resultado *= numero;
                printf("A MULTIPLICACAO RESULTOU EM: %.2f\n", resultado);

                printf("FAZER MAIS UMA VEZ? [0 NAO, 1 SIM] ");
                scanf("%d", &continuar);
            }

            
            resultado = 0;
            numero = 0;
            continuar = 1;

            break;

        case 4:
            while (continuar != 0)
            {
                printf("ESCOLHA UM NUMERO: ");
                scanf("%f", &resultado);

                printf("DIVIDIDO POR: ");
                scanf("%f", &numero);

                resultado /= numero;
                printf("A DIVISAO RESULTOU EM: %.2f\n", resultado);

                printf("FAZER MAIS UMA VEZ? [0 NAO, 1 SIM] ");
                scanf("%d", &continuar);
            }

            resultado = 0;
            numero = 0;
            continuar = 1;

            break;

        case 5:
            while (continuar != 0)
            {
                printf("ESCOLHA UM NUMERO: ");
                scanf("%f", &numero);

                resultado = sqrt(numero);
                printf("A RAIZ QUADRADA RESULTOU EM: %.2f\n", resultado);

                printf("FAZER MAIS UMA VEZ? [0 NAO, 1 SIM] ");
                scanf("%d", &continuar);
            }

            resultado = 0;
            numero = 0;
            continuar = 1;

            break;

        default:
            printf("OPCAO INVALIDA, TENTE NOVAMENTE!");
            break;
        }
    }

    return 0;
}