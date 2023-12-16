#include <stdio.h>

#define N 3  

void fillArray(int arr[N][N], int n) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                arr[i][j] = 0;  
            } else if (i < j) {
                arr[i][j] = 2;  
            } else {
                arr[i][j] = 1;  
            }
        }
    }
}

void printArray(int arr[][N], int n) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[N][N];


    fillArray(array, N);
    printArray(array, N);

    return 0;
}
