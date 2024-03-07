/*
    Escreva um codigo que imprima na tela todos os numeros pares de 0 a 100
*/

#include <stdio.h>

int main() {
    int num;

    for (num = 0; num <= 100; num=num+2) {
        printf("%d\n", num);
    }

    return 0;
}