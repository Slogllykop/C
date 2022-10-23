#include <stdio.h>

void getMatrix(int arr[100][100], int size);
void displayMatrix(int arr[100][100], int size);
void sumMatrix(int arr1[100][100], int arr2[100][100], int arr3[100][100], int size);
void multiplyMatrix(int arr1[100][100], int arr2[100][100], int arr3[100][100], int size);
void transposeMatrix(int arr[100][100], int arr2[100][100], int size);
void verticalFlip(int arr[100][100], int arr2[100][100], int size);

int main()
{
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    int arr1[100][100], arr2[100][100], arr3[100][100], arr4[100][100], arr5[100][100], arr6[100][100];
    
    getMatrix(arr1, size);
    getMatrix(arr2, size);

    sumMatrix(arr1, arr2, arr3, size);
    printf("Matrix A: \n");
    displayMatrix(arr1, size);
    printf("Matrix B: \n");
    displayMatrix(arr2, size);
    printf("Sum of A and B: \n");
    displayMatrix(arr3, size);
    printf("Multiplication of A and B: \n");
    multiplyMatrix(arr1, arr2, arr4, size);
    displayMatrix(arr4, size);
    printf("Transpose of A: \n");
    transposeMatrix(arr1, arr5, size);
    displayMatrix(arr5, size);
    return 0;
}

void getMatrix(int arr[100][100], int size) {
    printf("%d x %d matrix\n", size, size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element %d, %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMatrix(int arr[100][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int arr1[100][100], int arr2[100][100], int arr3[100][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void multiplyMatrix(int arr1[100][100], int arr2[100][100], int arr3[100][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < size; k++) {
                arr3[i][j] = arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void transposeMatrix(int arr[100][100], int arr2[100][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr2[i][j] = arr[j][i];
        }
    }
}