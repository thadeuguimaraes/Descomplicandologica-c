/*#include <stdio.h>

int main()
{
    int linha, coluna;
    int matriz[3][3];
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigitar os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    printf("\n\nVeja a sua Matriz\n");
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int linha, coluna;
    int matriz[3][3];
    int eh_diagonal = 1;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigitar os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            if (coluna != linha && matriz[linha][coluna] != 0)
            {
                eh_diagonal = 0;
            }
        }
    }

    if (eh_diagonal == 1)
    {
        printf("\n\nSua matriz é diagonal!");
    }
    else
    {
        printf("\n\nSua matriz não é diagonal!");
    }
    return 0;
}

*/

#include <stdio.h>
int main()
{
    // Matriz inicial
    int mat[3][5] = {
        1, 1, 1, 0, -1,
        1, 1, 1, 1, 1,
        0, 0, -1, -1, -1};

    int opcao;
    int numVoo;
    int reservou;

    do
    {
        printf("\n1 - Reservar voo\n2 - Sair\nInforme a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Informe o número do voo (1-3): ");
            scanf("%d", &numVoo);
            reservou = 0;
            if (numVoo >= 1 && numVoo <= 3)
            {
                for (int i = 0; i < 5 && reservou == 0; i++)
                {
                    if (mat[numVoo - 1][i] == 0)
                    {
                        reservou = 1;
                        mat[numVoo - 1][i] = 1;
                    }
                }
                if (reservou == 1)
                    printf("\nSeu voo foi reservado com sucesso!");
                else
                    printf("\nNão há poltronas disponíveis nesse voo!");
            }
            else
            {
                printf("Opção inválida!");
            }
            break;
        case 2:
            printf("\nSaindo...");
            break;
        default:
            printf("Opção inválida!");
        }
    } while (opcao != 2);
    return 0;
}
