/*
    Escreva um codigo que solicite ao usuario que insira numeros positivos e calcule a soma desses numeros
    até que ele insira um numero 0
*/

#include <stdio.h>

int main(){
    int num = 0;
    int cont = 0;

    do {
        printf("Digite um numero que nn seja 0: ");
        scanf("%d", &num);
        cont += num;
    } while (num >= 0);

    printf("%d", cont);

    return 0;
}