#include <stdio.h>
#include <string.h>

int main() {
    char cor[20];
    int qtd;
    float preco;

    printf("Cor: ");
    scanf("%s", cor);
    printf("Quantidade: ");
    scanf("%d", &qtd);

    if (strcmp(cor, "Azul") == 0) preco = 10;
    else if (strcmp(cor, "Rosa") == 0) preco = 25;
    else if (strcmp(cor, "Verde") == 0) preco = 35;
    else if (strcmp(cor, "Vermelho") == 0) preco = 50;
    else {
        printf("Cor invalida\n");
        return 0;
    }

    printf("Total: %.2f\n", preco * qtd);

    return 0;
}
