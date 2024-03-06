/*
Fa�a uma calculadora que execute as 4 opera��es aritm�ticas.
A calculadora dever� exibir um menu para o usu�rio escolher qual opera��o ele deseja fazer.
*/

//  STANDARD INPUT OUTPUT . HEADER

#include <stdio.h>
#include<locale.h>

int main() {
    // Defini��o de regional
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de vari�veis
    float n1, n2, resultado;
    int opc;

    // Menu de escolha de opera��o    
    printf("Escolhe uma op��o:\n1- Soma\n2- Subtra��o\n3- Multiplica��o\n4- Divis�o\n");
    scanf("%d", &opc);

    // Entrada dos n�meros a serem calculados
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);

    // Estrutura Condicional com o processamento das opera��es
    switch(opc){
        case 1:
            resultado = n1+n2;
            printf("O resultado da soma: %.2f", resultado);
            break;
        case 2:            
            printf("O resultado da subtra��o: %.2f", n1-n2);
            break;
        case 3:
            resultado = n1*n2;
            printf("O resultado da multiplica��o: %.2f", resultado);
            break;
        case 4:
            resultado = n1/n2;
            printf("O resultado da divis�o: %.2f", resultado);
            break;
        default:
            printf("Opera��o inv�lida");
            break;
    }

    return 0;
}