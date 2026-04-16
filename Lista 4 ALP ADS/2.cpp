#include <stdio.h>

float converter(float valor, int opcao) {
    switch(opcao) {
        case 1: return valor / 3.80;
        case 2: return valor / 1.85;
        case 3: return valor / 2.43;
        case 4: return valor / 2.31;
        default: return 0;
    }
}

int main() {
    float valor;
    int opcao;

    printf("Digite o valor em reais: ");
    scanf("%f", &valor);

    printf("1-Libra\n2-Franco\n3-Dolar\n4-Marco\n");
    scanf("%d", &opcao);

    printf("Valor convertido: %.2f\n", converter(valor, opcao));

    return 0;
}
