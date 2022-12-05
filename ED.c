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

    return 0;
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <stdbool.h>
// #include <assert.h>

// struct No
// {
//     int info;
//     struct No *proximo;
// };

// struct Lista
// {
//     struct No *inicio;
//     int tamanho;
// };

// struct Lista *criar()
// {
//     struct Lista *nova_lista = (struct Lista *)malloc(sizeof(struct Lista));
//     if (nova_lista != NULL)
//     {
//         nova_lista->inicio = NULL;
//         nova_lista->tamanho = 0;
//     }
//     return nova_lista;
// }

// bool vazia(struct Lista *li)
// {
//     assert(li != NULL);
//     if (li->inicio == NULL)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     struct Lista *minha_lista = criar();
//     if (vazia(minha_lista) == true)
//     {
//         printf("\nOK, lista vazia!");
//     }
//     else
//     {
//         printf("\nOps... algo deu errado!");
//     }
//     return 0;
// }
