#include <stdio.h>

int main() {
    float horas, valor_hora, salario;
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor da hora: ");
    scanf("%f", &valor_hora);
    
    salario = horas * valor_hora;
    
    printf("Salario a receber: R$ %.2f\n", salario);
    return 0;
}
