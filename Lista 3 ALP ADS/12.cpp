#include <stdio.h>

int main() {
    float salario, desconto = 0;
    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 600.00) {
        desconto = 0;
    } else if (salario <= 1200.00) {
        desconto = salario * 0.20;
    } else if (salario <= 2000.00) {
        desconto = salario * 0.25; 
    } else {
        desconto = salario * 0.30; 
    }

    printf("Desconto do INSS: R$ %.2f\n", desconto);
    return 0;
}
