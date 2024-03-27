/*
    Escreva um programa em C que receba duas notas de um aluno, seu nome e sua idade.
    O programa deve retornar o nome e a média do aluno.

    Os dados devem ser armazenados em uma structure
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[51];
    float nota1, nota2;
    int idade;
} cadastroAluno;

int main() {
    cadastroAluno alunos;

    float media;
    
    printf("Digite o nome do aluno: ");
    fgets(alunos.nome, sizeof(alunos.nome), stdin);
    alunos.nome[strcspn(alunos.nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &alunos.idade);

    printf("Digite a primeira nota: ");
    scanf("%f", &alunos.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &alunos.nota2);

    media = (alunos.nota1 + alunos.nota2) / 2;
    printf("%.2f", media);

    return 0;
}