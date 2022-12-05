#include <stdio.h>   // para operações de entrada e saída
#include <stdlib.h>  // para alocação dinâmica de memória
#include <stdbool.h> // para uso do tipo de dados “bool”
#include <assert.h>  // para uso da instrução “assert”

struct No
{
    int info;
    struct No *proximo;
};

struct Fila
{
    struct No *inicio;
    struct No *fim;
    int tamanho;
};

struct Fila *criar()
{
    struct Fila *nova_fila = (struct Fila *)malloc(sizeof(struct Fila));
    if (nova_fila != NULL)
    {
        nova_fila->inicio = NULL;
        nova_fila->fim = NULL;
        nova_fila->tamanho = 0;
    }
    return nova_fila;
}

void enfileirar(struct Fila *f, int item)
{
    assert(f != NULL);
    struct No *novo_no = (struct No *)malloc(sizeof(struct No));
    if (novo_no != NULL)
    {
        novo_no->info = item;
        novo_no->proximo = NULL;

        if (f->fim != NULL)
        {
            f->fim->proximo = novo_no;
        }
        else
        {
            f->inicio = novo_no;
        }
        f->fim = novo_no;
        f->tamanho++;
    }
}

int desenfileirar(struct Fila *f)
{
    assert(f != NULL);
    assert(f->inicio != NULL);
    struct No *aux = f->inicio;
    int elemento = aux->info;
    f->inicio = aux->proximo;
    if (f->inicio == NULL)
    {
        f->fim = NULL;
    }
    f->tamanho--;
    free(aux);
    return elemento;
}

bool vazia(struct Fila *f)
{
    assert(f != NULL);
    return (f->inicio == NULL);
}

int tamanho(struct Fila *f)
{
    assert(f != NULL);
    return f->tamanho;
}

int inicio(struct Fila *f)
{
    assert(f != NULL);
    assert(f->inicio != NULL);
    return f->inicio->info;
}

void liberar(struct Fila *f)
{
    assert(f != NULL);
    while (f->inicio != NULL)
    {
        desenfileirar(f);
    }
    free(f);
}

int main()
{
    struct Fila *minha_fila = criar();
    enfileirar(minha_fila, 1);
    enfileirar(minha_fila, 2);
    enfileirar(minha_fila, 3);
    printf("Tamanho: %d ", tamanho(minha_fila));

    printf("\nMinha fila: [%d ", desenfileirar(minha_fila));
    printf("%d ", desenfileirar(minha_fila));
    printf("%d]", desenfileirar(minha_fila));

    printf("\nEstá vazia (1 - Sim, 0 - Não)? %d ", vazia(minha_fila));

    liberar(minha_fila);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <assert.h>

// struct No
// {
//     int info;
//     struct No *proximo;
// };

// struct Pilha
// {
//     struct No *topo;
//     int tamanho;
// };

// struct Pilha *criar()
// {
//     struct Pilha *nova_pilha = (struct Pilha *)malloc(sizeof(struct Pilha));
//     if (nova_pilha != NULL)
//     {
//         nova_pilha->topo = NULL;
//         nova_pilha->tamanho = 0;
//     }
//     return nova_pilha;
// }

// void empilhar(struct Pilha *p, int item)
// {
//     assert(p != NULL);
//     struct No *novo_no = (struct No *)malloc(sizeof(struct No));
//     if (novo_no != NULL)
//     {
//         novo_no->info = item;
//         novo_no->proximo = p->topo;
//         p->topo = novo_no;
//         p->tamanho++;
//     }
// }

// int desempilhar(struct Pilha *p)
// {
//     assert(p != NULL);
//     assert(p->topo != NULL);
//     struct No *aux = p->topo;
//     int elemento = aux->info;
//     p->topo = aux->proximo;
//     p->tamanho--;
//     free(aux);
//     return elemento;
// }

// int topo(struct Pilha *p)
// {
//     assert(p != NULL);
//     assert(p->topo != NULL);
//     struct No *topo = p->topo;
//     return topo->info;
// }

// int tamanho(struct Pilha *p)
// {
//     assert(p != NULL);
//     return p->tamanho;
// }

// bool vazia(struct Pilha *p)
// {
//     assert(p != NULL);
//     return (p->topo == NULL);
// }

// void liberar(struct Pilha *p)
// {
//     assert(p != NULL);
//     while (vazia(p) == false)
//     {
//         desempilhar(p);
//     }
//     free(p);
// }

// int main()
// {
//     struct Pilha *minha_pilha = criar();

//     printf("Está vazia (1 - SIM; 0 - NÃO)? %d\n", vazia(minha_pilha));

//     printf("Empilhando 1... \n");
//     empilhar(minha_pilha, 1);
//     printf("Empilhando 2... \n");
//     empilhar(minha_pilha, 2);
//     printf("Empilhando 3... \n");
//     empilhar(minha_pilha, 3);

//     printf("Está vazia (1 - SIM; 0 - NÃO)? %d\n", vazia(minha_pilha));

//     printf("Topo = %d\n", topo(minha_pilha));
//     printf("Tamanho = %d\n", tamanho(minha_pilha));

//     printf("Desempilhando elementos: ");
//     printf("%d ", desempilhar(minha_pilha));
//     printf("%d ", desempilhar(minha_pilha));
//     printf("%d ", desempilhar(minha_pilha));

//     liberar(minha_pilha);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <assert.h>

// struct No
// {
//     int info;
//     struct No *proximo;
// };

// struct Pilha
// {
//     struct No *topo;
//     int tamanho;
// };

// struct Pilha *criar()
// {
//     struct Pilha *nova_pilha = (struct Pilha *)malloc(sizeof(struct Pilha));
//     if (nova_pilha != NULL)
//     {
//         nova_pilha->topo = NULL;
//         nova_pilha->tamanho = 0;
//     }
//     return nova_pilha;
// }

// void empilhar(struct Pilha *p, int item)
// {
//     assert(p != NULL);
//     struct No *novo_no = (struct No *)malloc(sizeof(struct No));
//     if (novo_no != NULL)
//     {
//         novo_no->info = item;
//         novo_no->proximo = p->topo;
//         p->topo = novo_no;
//         p->tamanho++;
//     }
// }

// int desempilhar(struct Pilha *p)
// {
//     assert(p != NULL);
//     assert(p->topo != NULL);
//     struct No *aux = p->topo;
//     int elemento = aux->info;
//     p->topo = aux->proximo;
//     p->tamanho--;
//     free(aux);
//     return elemento;
// }

// int main()
// {
//     struct Pilha *minha_pilha = criar();
//     empilhar(minha_pilha, 1);
//     empilhar(minha_pilha, 2);
//     empilhar(minha_pilha, 3);

//     printf("%d ", desempilhar(minha_pilha));
//     printf("%d ", desempilhar(minha_pilha));
//     printf("%d ", desempilhar(minha_pilha));

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <assert.h>

// struct No
// {
//     int info;
//     struct No *proximo;
// };

// struct Pilha
// {
//     struct No *topo;
//     int tamanho;
// };

// struct Pilha *criar()
// {
//     struct Pilha *nova_pilha = (struct Pilha *)malloc(sizeof(struct Pilha));
//     if (nova_pilha != NULL)
//     {
//         nova_pilha->topo = NULL;
//         nova_pilha->tamanho = 0;
//     }
//     return nova_pilha;
// }

// void empilhar(struct Pilha *p, int item)
// {
//     assert(p != NULL);
//     struct No *novo_no = (struct No *)malloc(sizeof(struct No));
//     if (novo_no != NULL)
//     {
//         novo_no->info = item;
//         novo_no->proximo = p->topo;
//         p->topo = novo_no;
//         p->tamanho++;
//     }
// }

// int desempilhar(struct Pilha *p)
// {
//     assert(p != NULL);
//     assert(p->topo != NULL);
//     struct No *aux = p->topo;
//     int elemento = aux->info;
//     p->topo = aux->proximo;
//     p->tamanho--;
//     free(aux);
//     return elemento;
// }

// int main()
// {
//     struct Pilha *minha_pilha = criar();
//     empilhar(minha_pilha, 1);
//     empilhar(minha_pilha, 2);
//     empilhar(minha_pilha, 3);

//     printf("%d ", desempilhar(minha_pilha));
//     printf("%d ", desempilhar(minha_pilha));
//     printf("%d ", desempilhar(minha_pilha));

//     return 0;
// }

// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <stdbool.h>
// // #include <assert.h>

// // struct No
// // {
// //     int info;
// //     struct No *proximo;
// // };

// // struct Pilha
// // {
// //     struct No *topo;
// //     int tamanho;
// // };

// // struct Pilha *criar()
// // {
// //     struct Pilha *nova_pilha = (struct Pilha *)malloc(sizeof(struct Pilha));
// //     if (nova_pilha != NULL)
// //     {
// //         nova_pilha->topo = NULL;
// //         nova_pilha->tamanho = 0;
// //     }
// //     return nova_pilha;
// // }

// // void empilhar(struct Pilha *p, int item)
// // {
// //     assert(p != NULL);
// //     struct No *novo_no = (struct No *)malloc(sizeof(struct No));
// //     if (novo_no != NULL)
// //     {
// //         novo_no->info = item;
// //         novo_no->proximo = p->topo;
// //         p->topo = novo_no;
// //         p->tamanho++;
// //     }
// // }

// // int desempilhar(struct Pilha *p)
// // {
// //     assert(p != NULL);
// //     assert(p->topo != NULL);
// //     struct No *aux = p->topo;
// //     int elemento = aux->info;
// //     p->topo = aux->proximo;
// //     p->tamanho--;
// //     free(aux);
// //     return elemento;
// // }

// // int main()
// // {

// //     return 0;
// // }