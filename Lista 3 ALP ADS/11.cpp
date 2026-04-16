#include <stdio.h>

int main() {
    float total, pagoJoao, pagoAmigos;
    int amigos;

    printf("Valor total da conta: ");
    scanf("%f", &total);
    printf("Quantidade de amigos: ");
    scanf("%d", &amigos);

    if (total < 300.00) {
        pagoJoao = total * 0.80; 
    } else if (total <= 600.00) {
        pagoJoao = total * 0.50; 
    } else {
        pagoJoao = total / (amigos + 1);
    }

    pagoAmigos = (total - pagoJoao) / amigos; 

    printf("Joao pagara: R$ %.2f\n", pagoJoao);
    printf("Cada amigo pagara: R$ %.2f\n", pagoAmigos);
    return 0;
}
