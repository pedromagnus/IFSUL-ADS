#include <stdio.h>

int main() {
    int i;
    float idades[5], soma = 0, media;

    for(i = 0; i < 5; i++) {
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%f", &idades[i]);
        soma += idades[i];
    }

    media = soma / 5;

    if (media < 25) {
        printf("Turma Jovem\nIdades: %.0f, %.0f, %.0f, %.0f, %.0f\n", 
                idades[0], idades[1], idades[2], idades[3], idades[4]); 
    } else if (media <= 40) {
        printf("Turma Adulta\nMedia das idades: %.2f\n", media); 
    } else {
        printf("Turma Idosa\nMedia: %.2f\n", media);
        printf("Idades: %.0f, %.0f, %.0f, %.0f, %.0f\n", 
                idades[0], idades[1], idades[2], idades[3], idades[4]); 
    }

    return 0;
}
