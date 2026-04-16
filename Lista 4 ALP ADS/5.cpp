#include <stdio.h>

int main() {
    int classe;
    float salario, adicional;

    printf("Salario: ");
    scanf("%f", &salario);
    printf("Classe: ");
    scanf("%d", &classe);

    switch(classe) {
        case 1: adicional = 1.0; break;
        case 2: adicional = 0.8; break;
        case 3: adicional = 0.5; break;
        case 4: adicional = 0.3; break;
        case 5: adicional = 0.1; break;
        case 6: adicional = 0.05; break;
        case 7: adicional = 0; break;
        default: printf("Invalido\n"); return 0;
    }

    printf("Salario final: %.2f\n", salario + (salario * adicional));

    return 0;
}
