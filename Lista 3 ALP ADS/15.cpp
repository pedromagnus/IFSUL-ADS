#include <stdio.h>

int main() {
    int quantidade;
    float total;

    printf("Quantidade de macas compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        total = quantidade * 0.80; 
    } else {
        total = quantidade * 0.50; 
    }

    printf("Valor total da compra: R$ %.2f\n", total);
    return 0;
}
