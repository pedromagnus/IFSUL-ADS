#include <stdio.h>

int main() {
    float f, c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c = (5 * (f - 32)) / 9;
    
    printf("Temperatura em Centigrados: %.2f C\n", c);
    return 0;
}
