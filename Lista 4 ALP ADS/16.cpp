#include <stdio.h>

int main() {
    int idade;
    float valor;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade <= 10) valor = 30;
    else if (idade <= 29) valor = 60;
    else if (idade <= 45) valor = 120;
    else if (idade <= 59) valor = 150;
    else if (idade <= 65) valor = 250;
    else valor = 400;

    printf("Valor: %.2f\n", valor);

    return 0;
}
