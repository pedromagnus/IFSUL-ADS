#include <stdio.h>

int main() {
    float distancia, tempo, v_media;
    printf("Distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Tempo gasto (horas): ");
    scanf("%f", &tempo);
    
    v_media = distancia / tempo;
    
    printf("Velocidade media: %.2f km/h\n", v_media);
    return 0;
}
