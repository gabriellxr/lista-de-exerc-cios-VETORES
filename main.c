#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];
    int qtdPares = 0;
    int qtdImpares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }
    }

    printf("\n\n Resultado Final \n\n");
    printf("Total de numeros PARES: %d\n", qtdPares);
    printf("Total de numeros IMPARES: %d\n\n", qtdImpares);

    system("pause");
    return 0;
}
