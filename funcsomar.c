<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
=======
=======
>>>>>>> Stashed changes
#include <stdio.h>

void testar(int *n1, int *n2)
{
    *n1 = -1; // o operador * permite acessar o valor da variável
    *n2 = -2;
    printf("\n\nValores dentro da função testar(): ");
    printf("\nn1 = %d e n2 = %d", *n1, *n2);
}

int main()
{
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    testar(&n1, &n2);

    printf("\n\nValores depois de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    return 0;
}

// #include <stdio.h>

// void testar(int n1, int n2)
// {
//     n1 = -1;
//     n2 = -2;
//     printf("\n\nValores dentro da função testar(): ");
//     printf("\nn1 = % e n2 = %d", n1, n2);
// }

// int main()
// {
//     int n1 = 10;
//     int n2 = 20;
//     printf("\nValores antes de chamar a função testar(): ");
//     printf("\nn1 = % e n2 = %d", n1, n2);

//     testar(n1, n2);

//     printf("\n\nValores depois de chamar a funçao testar(): ");
//     printf("\nn1 = % e n2 = %d", n1, n2);

//     return 0;
// }

// #include <stdio.h>
// int somar(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int result;
//     result = somar(10, 15);
//     printf("\nResultado da soma = %d", result);
//     return 0;
// }

<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
=======
#include <stdio.h>
int somar(int a, int b)
{
    return a + b;
}
int main()
{
    int result;
    result = somar(10, 15);
    printf("\nResultado da soma = %d", result);
    return 0;
}

>>>>>>> Stashed changes
// #include <stdio.h>
// int somar()
// {
//     return 2 + 3;
// }
// int main()
// {
//     int resultado = 0;
//     resultado = somar();
//     printf("O resultado da função é = %d", resultado);
//     return 0;
// }

// #include <stdio.h>
// float calcular()
// {
//     float num;
//     printf("\nDigte  um numero: ");
//     scanf("%f", &num);
//     return num * num;
// }

// int main()
// {
//     float resultado = 0;
//     resultado = calcular();
//     printf("\nO quadrado do numero digitado é %.2f ", resultado);
// }

// #include <stdio.h>
// int somar()
// {
//     int x = 0;
//     x = 2 + 3;
//     return x;
// }
// int main()
// {
//     int resultado = 0;
//     resultado = somar();
//     printf("O resultado da função é = %d", resultado);
//     return 0;
// }
