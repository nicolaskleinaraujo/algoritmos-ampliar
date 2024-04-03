/*
    Faça uma calculadora com as 4 operações basicas.
    Cada operação deve ser uma sub-rotina.
    Você deve informar ao usuario as opções para cada operação.
    Se ele escolher a opção 0, o programa devera ser encerrado.
*/

#include <stdio.h>

int n1, n2;

void entradaDados()
{
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
}

int soma()
{
    entradaDados();
    return n1 + n2;
};

int subtracao()
{
    entradaDados();
    return n1 - n2;
};

int multiplicacao()
{
    entradaDados();
    return n1 * n2;
};

int divisao()
{
    entradaDados();
    return n1 / n2;
};

int main()
{
    int opc, resultado;

    do
    {
        printf("Escolha uma opcao:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 0:
            break;

        case 1:
            resultado = soma();
            break;

        case 2:
            resultado = subtracao();
            break;

        case 3:
            resultado = multiplicacao();
            break;

        case 4:
            resultado = divisao();
            break;

        default:
            printf("OPCAO INVALIDA, DIGITE NOVAMENTE!\n");
            break;
        }

        printf("%d\n", resultado);
    } while (opc != 0);

    return 0;
}
