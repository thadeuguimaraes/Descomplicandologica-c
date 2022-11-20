/*#include <stdio.h>

int main(void){
    int n;

    printf("\n(1) para Saldo\n(2) para Extrato\n(3) para Saque\n(4) para Sair");
    printf("\nInforme a operação desejada: ");

    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("\nSaldo");
            break;
        case 2:
            printf("\nExtrato");
            break;
        case 3:
            printf("\nSaque");
            break;
        case 4:
            printf("\nSair");
            break;
        default:
            printf("\nInválido");
    }
}
*/

#include <stdio.h>
int main()
{
    char x;
    float valor, desc, total;
    printf("\n Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
    printf("\n a. azul");
    printf("\n v. vermelho");
    printf("\n b. branco");
    printf("\n Digite sua opcao:");
    scanf("%s", &x);
    switch (x)
    {
    case 'a':
        printf("\n Você escolheu a cor azul, seu desconto será de 30 por cento");
        desc = 30;
        break;
    case 'v':
        printf("\n Você escolheu a cor vermelha, seu desconto será de 20 por cento");
        desc = 20;
        break;
    case 'b':
        printf("\n Você escolheu a cor branca, seu desconto será de 10 por cento");
        desc = 10;
        break;
    default:
        printf("Opcão inválida, não será concedido desconto\n");
        desc = 0;
    }
    total = valor - (valor * desc / 100);
    printf("\n O valor da sua compra é R$ %.2f", total);

    return 0;
}
