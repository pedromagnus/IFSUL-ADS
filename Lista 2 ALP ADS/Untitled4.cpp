#include <stdio.h>

int main() {
    float km_inicial, km_final, volume, consumo;
    printf("Quilometragem inicial: ");
    scanf("%f", &km_inicial);
    printf("Quilometragem final: ");
    scanf("%f", &km_final);
    printf("Volume de combustivel (l): ");
    scanf("%f", &volume);
    
    consumo = (km_final - km_inicial) / volume;
    
    printf("Consumo medio: %.2f Km/l\n", consumo);
    return 0;
}
