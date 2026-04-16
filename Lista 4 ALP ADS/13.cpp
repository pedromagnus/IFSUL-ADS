#include <stdio.h>

int main() {
    int dia, mes;
    char nome[50];

    printf("Nome: ");
    scanf("%s", nome);
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);

    if ((dia >= 20 && mes == 3) || (dia <= 20 && mes == 4)) printf("%s - Aries\n", nome);
    else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) printf("%s - Touro\n", nome);
    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) printf("%s - Gemeos\n", nome);
    else if ((dia >= 21 && mes == 6) || (dia <= 21 && mes == 7)) printf("%s - Cancer\n", nome);
    else if ((dia >= 22 && mes == 7) || (dia <= 22 && mes == 8)) printf("%s - Leao\n", nome);
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) printf("%s - Virgem\n", nome);
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) printf("%s - Libra\n", nome);
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) printf("%s - Escorpiao\n", nome);
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) printf("%s - Sagitario\n", nome);
    else if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 1)) printf("%s - Capricornio\n", nome);
    else if ((dia >= 21 && mes == 1) || (dia <= 18 && mes == 2)) printf("%s - Aquario\n", nome);
    else printf("%s - Peixes\n", nome);

    return 0;
}
