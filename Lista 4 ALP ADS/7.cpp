#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];

    printf("Sigla: ");
    scanf("%s", estado);

    if (strcmp(estado, "RS") == 0) printf("Gaucho\n");
    else if (strcmp(estado, "RJ") == 0) printf("Carioca\n");
    else if (strcmp(estado, "SP") == 0) printf("Paulista\n");
    else if (strcmp(estado, "MG") == 0) printf("Mineiro\n");
    else printf("Outro estado\n");

    return 0;
}
