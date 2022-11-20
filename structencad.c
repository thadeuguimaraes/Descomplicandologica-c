#include <string.h>
int main()
{
    float nota_final;
    printf("\n Informe a nota final do aluno:");
    scanf("%f", &nota_final);

    if (nota_final >= 60)
    {
        printf("\n Aprovado");
    }
    else if (nota_final >= 50)
    {
        printf("\n recuperação");
    }
    else
    {
        printf("\n Reprovado");
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    float nota_final;
    printf("\n Informe a nota final do aluno:");
    scanf("%f", &nota_final);

    if (nota_final >= 60)
    {
        printf("\n Aprovado");
    }
    else
    {
        if (nota_final >= 50)
        {
            printf("\n Em recuperação");
        }
        else
        {
            printf("\n Reprovado");
        }
    }
    return 0;
}*/