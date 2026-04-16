#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    int soma_quadrados = (n1 * n1) + (n2 * n2);
    float divisao = (float)n1 / n2;
    
    printf("Soma dos quadrados: %d\n", soma_quadrados);
    printf("Resultado da divisao: %.2f\n", divisao);
    return 0;
}
