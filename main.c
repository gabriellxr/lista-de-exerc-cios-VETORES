#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];
    int numerosInvertidos[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        numerosInvertidos[i] = numeros[9 - i];
    }

    printf("\nA escrita inversa desses numeros e: { ");

    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            printf("%d, ", numerosInvertidos[i]);
        } else {
            printf("%d }\n\n", numerosInvertidos[i]);
        }
    }

    system("pause");
    return 0;
}