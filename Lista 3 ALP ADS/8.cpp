#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3; 

    if (media >= 7.0) { 
        printf("Aprovado! Media: %.2f\n", media);
    } else {
        printf("Reprovado! Media: %.2f\n", media);
    }
    return 0;
}
