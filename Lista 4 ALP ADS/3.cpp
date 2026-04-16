#include <stdio.h>

int main() {
    int codigo, qtd;
    float preco;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);
    printf("Quantidade: ");
    scanf("%d", &qtd);

    switch(codigo) {
        case 1001: preco = 5.32; break;
        case 1324: preco = 6.45; break;
        case 6548: preco = 2.37; break;
        case 987: preco = 5.32; break;
        case 7623: preco = 6.45; break;
        default:
            printf("Codigo invalido\n");
            return 0;
    }

    printf("Total: %.2f\n", preco * qtd);

    return 0;
}
