#include <stdio.h>

#define N 3  // Кількість рядків
#define M 4  // Кількість стовпців


void convertToMatrix(int arr[], int matrix[N][M]) {
    int index = 0;

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = arr[index++];
        }
    }
}


void printMatrix(int matrix[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrix[N][M];
    convertToMatrix(arr, matrix);
    printMatrix(matrix);

    return 0;
}
