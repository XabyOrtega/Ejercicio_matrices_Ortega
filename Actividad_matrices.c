#include <stdio.h>

int main() {
    int Ortega[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            Ortega[i][j] = 0;
        }
    }

    printf("Matriz Ortega de ceros:\n\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", Ortega[i][j]);
        }
        printf("\n");
    }

    return 0;
}
