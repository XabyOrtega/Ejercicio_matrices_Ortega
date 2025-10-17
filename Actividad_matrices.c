#include <stdio.h>

int main() {
    int I, J;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &I);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &J);

   int Ortega[I][J];

    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            if (i == j)
                Ortega[i][j] = 1;
            else
                Ortega[i][j] = 0;  
        }
    }

    printf("\nMatriz Ortega (%dx%d):\n\n", I, J);
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            printf("%2d ", Ortega[i][j]);
        }
        printf("\n");
    }

    return 0;
}
