#include <stdio.h>

int main() {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 67) printf("Pode doar\n");
    else printf("Nao pode doar\n");

    return 0;
}
