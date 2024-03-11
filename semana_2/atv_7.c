/*
    Escreva um programa em C que peça ao usuário para digitar um número e imprima a tabuada de multiplicação desse número
*/

#include <stdio.h>

int main() {
    int num;

    printf("Escolha um numero para a tabuada: ");
    scanf("%d", &num);

    for (int indice = 0; indice <= 10; indice++){
        printf("%d x %d = %d\n", num, indice, num * indice);
    }

    return 0;
}