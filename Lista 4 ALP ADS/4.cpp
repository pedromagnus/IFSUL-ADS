#include <stdio.h>

int main() {
    int cargo;
    float salario, novo, aumento;

    printf("Salario: ");
    scanf("%f", &salario);
    printf("Cargo (1-3): ");
    scanf("%d", &cargo);

    if (cargo == 1) aumento = 0.10;
    else if (cargo == 2) aumento = 0.20;
    else if (cargo == 3) aumento = 0.30;
    else aumento = 0.40;

    novo = salario + (salario * aumento);

    printf("Antigo: %.2f\nNovo: %.2f\nDiferenca: %.2f\n", salario, novo, novo - salario);

    return 0;
}
