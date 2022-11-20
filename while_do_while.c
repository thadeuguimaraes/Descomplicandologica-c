/*#include <stdlib.h>
int main()
{
    int cont = 0;

    // Será executado enquanto  cont for menor que 10
    while (cont < 10)
    {
        printf("\n PROGRAMA");

        // incrementa cont, para que não entre em loop infinito
        cont++;
    }
    return 0;

#include <stdio.h>
int main(void)
{
    char parar;
    float nota;
    printf("\nDigite a nota final do aluno: ");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10)
    {
        printf("\nNota inválida! Digite a nota final do aluno: ");
        scanf("%f", &nota);
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    char parar;
    float nota;
    do
    {
        printf("\nDigite a nota final do aluno (min: 0, max: 10): ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
    return 0;
}


#include <stdio.h>
int main()
{
    float metragem1, metragem2, resultado;
    int resp;
    metragem1 = 0;
    metragem2 = 0;
    resultado = 0;
    printf("\nC Á L C U L O    D E   M E T R O S    Q U A D R A D O S");
    do
    {
        printf("\n\nDigite a primeira metragem do terreno: ");
        scanf("%f", &metragem1);
        printf("\nDigite a segunda metragem do terreno: ");
        scanf("%f", &metragem2);
        resultado = metragem1 * metragem2;
        printf("\n\nO Terreno tem = %.2f m2", resultado);
        printf("\n\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    } while (resp == 1);
    return 0;
}


#include <stdio.h>
int main()
{
    float soma = 0;
    float valor;
    int opcao;
    do
    {
        printf("\n M E N U   D E  O P Ç Õ E S");
        printf("\n 1. Depósito");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");
        printf("\n Informe uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\n Informe o valor: ");
            scanf("%f", &valor);
            soma += valor;
            break;
        case 2:
            printf("\n Informe o valor: ");
            scanf("%f", &valor);
            soma -= valor;
            break;
        case 3:
            printf("\n Saldo atual = R$ %.2f", soma);
            break;
        case 4:
            printf("\n Saindo...");
            break;
        default:
            printf("\n Opção inválida!");
        }
    } while (opcao != 4);
    printf("\n\n Fim das operações!");
    return 0;
}
}*/

#include <stdio.h>
int main()
{
    int qtde_notas = 0, opcao;
    float nota, media, soma_notas = 0.0;

    do
    {
        printf("\nDigite a nota do aluno %d: ", qtde_notas + 1);
        scanf("%f", &nota);
        qtde_notas += 1;
        soma_notas += nota;
        printf("\nDigite 1 para informar outra nota ou 2 para encerrar: ");
        scanf("%d", &opcao);
    } while (opcao != 2);

    printf("\n\nQuantidade de alunos = %d", qtde_notas);
    media = soma_notas / (float)qtde_notas;
    printf("\nMédia das notas = %.2f", media);
    return 0;
}