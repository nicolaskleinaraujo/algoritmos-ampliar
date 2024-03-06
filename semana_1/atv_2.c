// Crie um programa que calcule a área de um quadrado
// lado²

#include <stdio.h>
#include <math.h>

int main(){
    float lado, area;

    printf("Informe o tamanho do lado do quadrado: ");
    scanf("%f", &lado);

    area = pow(lado, 2);

    printf("Area do quadrado: %.2f", area);

    return 0;
}