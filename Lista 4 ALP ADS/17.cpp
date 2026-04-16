#include <stdio.h>
#include <string.h>

int main() {
    char destino[20];
    int idaVolta;
    float valor;

    printf("Destino (Norte, Nordeste, Centro-Oeste, Sul): ");
    scanf("%s", destino);

    printf("Ida e volta? (1-Sim 0-Nao): ");
    scanf("%d", &idaVolta);

    if (strcmp(destino, "Norte") == 0) {
        valor = idaVolta ? 900 : 500;
    } else if (strcmp(destino, "Nordeste") == 0) {
        valor = idaVolta ? 650 : 350;
    } else if (strcmp(destino, "Centro-Oeste") == 0) {
        valor = idaVolta ? 600 : 350;
    } else if (strcmp(destino, "Sul") == 0) {
        valor = idaVolta ? 550 : 300;
    } else {
        printf("Destino invalido\n");
        return 0;
    }

    printf("Valor da passagem: %.2f\n", valor);

    return 0;
}
