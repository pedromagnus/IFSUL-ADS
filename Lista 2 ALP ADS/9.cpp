#include <stdio.h>

int main() {
    float comp, larg, alt, area_total, qtd_caixas;
    printf("Digite comprimento, largura e altura da cozinha: ");
    scanf("%f %f %f", &comp, &larg, &alt);
    
   
    area_total = (2 * comp * alt) + (2 * larg * alt);
    qtd_caixas = area_total / 1.5;
    
    printf("Quantidade de caixas necessarias: %.2f\n", qtd_caixas);
    return 0;
}
