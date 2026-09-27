#include <stdio.h>

typedef struct
{
    int codigo;
    char descricao[50];
    float preco;
    int quantidade;
} Produto;

 void aplicarDesconto(Produto *produto, float percentual) {
    if (produto != NULL) {
        produto->preco -= (produto->preco) * (percentual/100.0f);
    }
 }

 void exibirProduto(const Produto *produto) {
    if (produto != NULL) {
        printf("Código: %d\n", produto->codigo);
        printf("Descrição: %s\n", produto->descricao);
        printf("Preço: %.2f €\n", produto->preco);
        printf("Quantidade: %d\n", produto->quantidade);
    }
}

 int main() {
    // Inicialização de um produto de teste
    Produto item = {101, "Teclado Mecanico", 250.00f, 15};

    printf("Antes do desconto:\n");
    exibirProduto(&item);

    // Aplica um desconto de 10%
    aplicarDesconto(&item, 10.0f);

    printf("Após aplicar 10%% de desconto:\n");
    exibirProduto(&item);

    return 0;
}