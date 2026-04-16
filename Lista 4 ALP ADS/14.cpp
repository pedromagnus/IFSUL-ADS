#include <stdio.h>

int main() {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade >= 10 && idade <= 14) printf("Infantil\n");
    else if (idade <= 17) printf("Juvenil\n");
    else if (idade <= 25) printf("Adulto\n");

    return 0;
}
