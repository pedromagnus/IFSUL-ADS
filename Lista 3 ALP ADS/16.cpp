#include <stdio.h>

int main() {
    int golsGremio, golsInter;

    printf("Gols do Gremio e Gols do Inter: ");
    scanf("%d %d", &golsGremio, &golsInter);

    if (golsGremio > golsInter) {
        printf("Vencedor: Gremio\n");
        printf("Gols a mais: %d\n", golsGremio - golsInter); 
    } else if (golsInter > golsGremio) {
        printf("Vencedor: Inter\n");
        printf("Gols a mais: %d\n", golsInter - golsGremio); 
    } else {
        printf("EMPATE\nTotal de gols: %d cada\n", golsGremio); 
    }

    return 0;
} 
