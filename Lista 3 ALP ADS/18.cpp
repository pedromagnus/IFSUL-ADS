#include <stdio.h>

int main() {
    float saldo, divida;
    printf("Saldo no banco e valor da divida: ");
    scanf("%f %f", &saldo, &divida);

    // Verifica do cenário mais caro para o mais barato
    if (saldo >= divida * 1.05) { // Juros de 5% após dia 20 [cite: 48]
        printf("Saldo suficiente para pagar em qualquer dia.\n");
    } else if (saldo >= divida * 1.03) { // Juros de 3% entre dia 11 e 20 [cite: 47]
        printf("Saldo suficiente para pagar ate o dia 20\n");
    } else if (saldo >= divida) { // Sem juros ate dia 10 [cite: 46]
        printf("Saldo suficiente para pagar ate o dia 10\n");
    } else {
        printf("A divida nao pode ser paga\n"); // [cite: 52]
    }
    return 0;
}
