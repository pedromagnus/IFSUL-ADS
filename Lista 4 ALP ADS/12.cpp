#include <stdio.h>

int main() {
    float saldo, credito;

    printf("Saldo medio: ");
    scanf("%f", &saldo);

    if (saldo <= 200) credito = 0;
    else if (saldo <= 400) credito = saldo * 0.2;
    else if (saldo <= 600) credito = saldo * 0.3;
    else credito = saldo * 0.4;

    printf("Credito: %.2f\n", credito);

    return 0;
}
