
/*#include <stdio.h>
int main()
{
    int x, y;
    for (y = 0; y <= 10; y++)
    {
        printf("\ny=%d", y);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int parar_em = 30;
    for (int i = 0; i < 100; i++)
    {
        if (i == parar_em)
        {
            break;
        }
        printf("%d ", i);
    }
}

#include <stdio.h>

#define VET_TAM 5

int main()
{
    int vetor[VET_TAM];
    int num, i = 0, achou = 0;

    // Preenche vetor
    for (int i = 0; i < VET_TAM; i++)
    {
        printf("\nEntre com um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n\nInforme o número a ser encontrado: ");
    scanf("%d", &num);

    while (i < VET_TAM)
    {
        if (vetor[i] == num)
        {
            achou = 1;
            break;
        }
        i++;
    }

    if (achou == 1)
    {
        printf("\nO número %d foi encontrado na posição %d do vetor", num, i);
    }
    else
    {
        printf("\nO número %d não foi encontrado no vetor", num);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}
*/