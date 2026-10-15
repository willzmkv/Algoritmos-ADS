#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct
{
    int codigo;
    char descricao[60];
    float preco;
    int quantidade;
} Produto;

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

struct Produto *buscarProduto(
    struct Produto *produtos,
    int total,
    int codigo)
{
    struct Produto *p = produtos;

    while (p < produtos + total)
    {
        if (p->codigo == codigo)
        {
            return p;
        }
        p++;
    }
    return NULL;
}

int lerDados(Produto *produto){
    if(produto == NULL){
        return 0;
    }
    printf("Digite o código:");
    scanf("%d", &produto->codigo);
    limparBuffer();

    printf("Informe a descrição: ");
    fgets(produto->descricao, sizeof(produto->descricao), stdin);
    produto->descricao[strcspn(produto->descricao, "\n")] = '\0';

    printf("Informe o preço: R$ ");
    scanf("%f", &produto->preco);
    limparBuffer();

    printf("Informe a quantidade: ");
    scanf("%d", &produto->quantidade);
    limparBuffer();

    return 1;
}

void mostrarProduto(Produto *produto) {
    printf("\nCódigo: %d\n", produto->codigo);
    printf("\nDescrição: %s\n", produto->descricao);
    printf("\nPreço: %.2f\n", produto->preco);
    printf("\nQuantidade: %d\n", produto->quantidade);
    printf("\nValor em estoque: %.2f\n", produto->quantidade * produto->preco);
}

void listarProdutos(Produto *produto, int total) {
    Produto *p = produto;
    float valorTotal = 0.0f;

    if (total == 0.0f) {
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    while(p < produto + total) {
        mostrarProduto(p);
        valorTotal += p->preco * p->quantidade;
        p++;
    }
    printf("Valor total em estoque: R$ %.2f.\n", valorTotal);
}

void atualizarProduto (Produto *produto) {
    if (produto == NULL) {
        printf("Produto não encontrado!\n");
        return 0;
    }
    printf("Informe os novos dados:\n");
    lerDados(produto);
    printf("Produto atualizado!\n");
}

void removerProduto (Produto *produto, int *total, int codigo) {
    Produto *p;
    if (p == NULL) {
        printf("Produto não encontrado!\n");
        return;
    }

    while (p < produto +(*total -1)) {
        *p = *(p+1);
        p++;
    }
    (*total)--;
    printf("Produto removido!\n");
}

int main () {
    
}


