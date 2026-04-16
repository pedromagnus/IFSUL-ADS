#include <stdio.h>

int main() {
    float saldo, divida;
    printf("Saldo no banco e valor da divida: ");
    scanf("%f %f", &saldo, &divida);

   
    if (saldo >= divida * 1.05) { 
        printf("Saldo suficiente para pagar em qualquer dia.\n");
    } else if (saldo >= divida * 1.03) { 
        printf("Saldo suficiente para pagar ate o dia 20\n");
    } else if (saldo >= divida) {
        printf("Saldo suficiente para pagar ate o dia 10\n");
    } else {
        printf("A divida nao pode ser paga\n"); 
    }
    return 0;
}
