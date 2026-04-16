#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite os valores de A e B: ");
    scanf("%d %d", &A, &B);

    if (A == B) {
        C = A + B; // 
    } else {
        C = A * B; // 
    }

    printf("Resultado C: %d\n", C); // 
    return 0;
}
