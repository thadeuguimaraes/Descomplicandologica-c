#include <stdio.h>
int main()
{
    int num;
    printf("\n Digite um número inteiro: ");
    scanf("%d, &num");
    if (num % 2 == 0)
    {
        printf("\n O número é par");
    }
    else
    {
        printf("O número é ímpar");
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    float orcamento;
    printf("Digite o valor do orçamento para viagem ");
    scanf("%f", &orcamento);
    if (orcamento >= 10000)
    {
        printf("\n João e Maria possuem orçamentopara uma viagem internacional");
    }
    else
    {
        printf("\n João e Maria irão optar uma viagem nacional");
    }
    return 0;
}
*/
