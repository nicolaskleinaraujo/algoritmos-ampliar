/*
Elabore um algoritmo que receba o sal�rio de um funcion�rio e o c�digo do 
cargo e apresente o cargo, o valor do aumento e o novo sal�rio. A tabela a seguir 
apresenta os cargos.

C�digo      Cargo             Percentual do aumento
1        Dev Front-end                 10%
2        Dev Back-end                  30%
3        DevOps                        50%
4        Pol�tico                      150%
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int cod;
    float salario, aumento;

    printf("Informe o c�digo do cargo: \n");
    printf("1 - Dev Front-end\n2 - Dev Back-end\n3 - DevOPs\n4 - Pol�tico\n");
    scanf("%d", &cod);

    printf("Informe seu sal�rio: ");
    scanf("%f", &salario);

    switch(cod) {
        case 1 :
            printf("O aumento foi de: %.2f\n", salario * 0.10);
            printf("Seu sal�rio atual �: %.2f", salario+(salario*0.10));
            break;
        
        case 2 :
            aumento = salario * 0.30;
            salario = salario + aumento;
            printf("O aumento foi de: %.2f\nSeu sal�rio atual �: %.2f", aumento, salario);
            break;
        
        case 3 :
            aumento = salario * 0.50;
            salario = salario + aumento;
            printf("O aumento foi de: %.2f\nSeu sal�rio atual �: %.2f", aumento, salario);
            break;

        case 4 :
            aumento = salario * 1.50;
            salario = salario + aumento;
            printf("O aumento foi de: %.2f\nSeu sal�rio atual �: %.2f", aumento, salario);
            break;

        default :
            printf("Op��o inv�lida");
            break;
    }

    return 0;
}