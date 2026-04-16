#include <stdio.h>

int main() {
    float velocidade;
    printf("Velocidade do veiculo: ");
    scanf("%f", &velocidade);

    if (velocidade > 80) {
        printf("Multa de R$ 360,00\n"); 
    } else if (velocidade > 60) {
        printf("Multa de R$ 180,00\n");
    } else {
        printf("Nao ha multa.\n"); 
    }
    return 0;
}S
