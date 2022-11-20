#include <stdio.h>
#include <ctype.h>

#define NOME_TAM 30

int main()
{
    char nome[NOME_TAM];
    int i;
    printf("\nDigite o nome do(a) aluno(a):");
    fgets(nome, NOME_TAM, stdin);
    printf("\nNome ANTES da mudança: %s", nome);

    for (int i = 0; i < NOME_TAM; i++)
    {
        nome[i] = toupper(nome[i]);
    }

    printf("\nNome DEPOIS da mudança: %s", nome);
    return 0;
}
