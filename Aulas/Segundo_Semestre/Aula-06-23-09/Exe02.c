#include <stdio.h>
#include <string.h>

typedef struct
{
    int codigo;
    char descricao[50];
    float preco;
    int quantidade;
} Produto;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int cadastrarProduto(Produto *produto) {
    if (produto == NULL) {
        return 0;
    }

    printf("Informe o código do produto: ");
    scanf("%d", &produto->codigo);
    limparBuffer();

    printf("Informe a descrição do produto:\n");
    printf("Descrição: ");
    fgets(produto->descricao, sizeof(produto->descricao), stdin);
    produto->descricao[strcspn(produto->descricao, "\n")] = '\0';

    printf("Informe o preço do produto: ");
    scanf("%f", &produto->preco);
    limparBuffer();

    printf("Informe a quantidade disponível: ");
    scanf("%d", &produto->quantidade);

    return 1;
}

 void aplicarDesconto(Produto *produto, float percentual) {
    if (produto != NULL) {
        produto->preco -= (produto->preco) * (percentual/100.0f);
    }
 }

 void exibirProduto(const Produto *produto) {
    if (produto != NULL) {
        printf("Código: %d\n", produto->codigo);
        printf("Descrição: %s\n", produto->descricao);
        printf("Preço: %.2f \n", produto->preco);
        printf("Quantidade: %d\n", produto->quantidade);
    }
}

 int main() {
    // Inicialização de um produto de teste
    Produto produto;
    float percentual;

    if (cadastrarProduto(&produto) == 1) {
        printf("Produto cadastrado com sucesso!\n");
    }

    printf("Antes do desconto:\n");
    exibirProduto(&produto);

    // Aplica um desconto
    printf("Informe o percentual do desconto: ");
    scanf("%f", &percentual);
    if (percentual >= 0.0f && percentual <= 100.0f) {
        aplicarDesconto(&produto, percentual);
        printf("Produto atualizado!\n");
    }
    else {
        printf("Percentual de desconto inválido!\n");
    }
    printf("Após aplicar %.2f%% de desconto:\n", percentual);
    exibirProduto(&produto);

    return 0;
}