#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[50];
    float conta;

    printf("Nome: ");
    scanf("%s", nome);
    printf("Conta: ");
    scanf("%f", &conta);

    char inicial = toupper(nome[0]);

    if (inicial == 'A' || inicial == 'D' || inicial == 'M' || inicial == 'S') {
        printf("Total com desconto: %.2f\n", conta * 0.7);
    } else {
        printf("Sem desconto\n");
    }

    return 0;
}
