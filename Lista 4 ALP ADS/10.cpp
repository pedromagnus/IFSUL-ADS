#include <stdio.h>

int main() {
    char nome[50], sexo, estado[20];
    int tempo;

    printf("Nome: ");
    scanf("%s", nome);
    printf("Sexo: ");
    scanf(" %c", &sexo);
    printf("Estado civil: ");
    scanf("%s", estado);

    if (sexo == 'F' && strcmp(estado, "CASADA") == 0) {
        printf("Tempo casada: ");
        scanf("%d", &tempo);
    }

    return 0;
}
