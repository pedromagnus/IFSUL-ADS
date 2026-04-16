#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Peso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) printf("Abaixo do peso\n");
    else if (imc < 25) printf("Peso normal\n");
    else if (imc < 30) printf("Acima do peso\n");
    else printf("Obeso\n");

    return 0;
}
