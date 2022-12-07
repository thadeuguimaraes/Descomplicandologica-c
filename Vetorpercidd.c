#include <stdio.h>
#define VET_TAM 6

float calcularMedia(float conjunto[], int tam)
{
    float soma = 0.0, resultado = 0.0;
    for (int i = 0; i < tam; i++)
    {
        soma += conjunto[i];
    }
    resultado = soma / (float)tam;
    return resultado;
}

float calcularMediana(float conjunto[], int tam)
{
    float resultado = 0.0;
    if (tam % 2 != 0)
    { // tam é impar
        resultado = conjunto[tam / 2];
    }
    else
    {
        resultado = (conjunto[tam / 2] + conjunto[(tam / 2) - 1]) / 2;
    }
    return resultado;
}

int main(void)
{
    float vet[VET_TAM] = {1, 2, 3, 4, 5, 6};
    float media = calcularMedia(vet, VET_TAM);
    float mediana = calcularMediana(vet, VET_TAM);
    printf("\nMédia = %.2f", media);
    printf("\nMediana = %.2f", mediana);
}

// #include <stdio.h>

// void inserir(int a[])
// {
//     int i = 0;
//     for (i = 0; i < 3; i++)
//     {
//         printf("\nDigite o valor %d: ", i);
//         scanf("%d", &a[i]);
//     }
// }

// void imprimir(int b[])
// {
//     int i = 0;
//     for (i = 0; i < 3; i++)
//     {
//         printf("\nNúmero[%d] = %d", i, 2 * b[i]);
//     }
// }
// int main()
// {
//     int numeros[3];
//     printf("\nPreenchendo o vetor... \n ");
//     inserir(numeros);
//     printf("\n\nDobro dos valores informados:");
//     imprimir(numeros);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int idade [3] = {0, 0, 0};
//     float media = 0.0;
//     printf("\n Informe a idade da pessoa 1: ");
//     scanf("%d", &idade[0]);
//     printf("\n Informe a idade da pessoa 2: ");
//     scanf("%d", &idade[1]);
//     printf("\n Informe a idade da pessoa 3: ");
//     scanf("%d", &idade[2]);
//     media = (idade[0] + idade[1] + idade[2]) /3;
//     printf("\n Média de idade = %.2f", media);
//     return 0;
// }