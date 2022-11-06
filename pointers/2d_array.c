#include <stdio.h>

void readMatrix(int (*p)[100], int n);
void printMatrix(int (*p)[100], int n);
void addMatrix(int (*p)[100],int (*q)[100], int (*s)[100], int n);
void multiplyMatrix(int (*p)[100],int (*q)[100], int (*m)[100], int n);
void verticalFlip(int (*p)[100], int n);
void horizontalFlip(int (*p)[100], int n);

int main()
{
    int arr1[100][100], arr2[100][100];
    int sum[100][100], mul[100][100];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Array 1:\n");
    readMatrix(arr1, n);

    printf("\nArray 2:\n");
    readMatrix(arr2, n);

    addMatrix(arr1, arr2, sum, n);
    multiplyMatrix(arr1, arr2, mul, n);

    printf("\nArray 1:\n");
    printMatrix(arr1, n);
    printf("Array 2:\n");
    printMatrix(arr2, n);
    printf("The sum of the matrices are:\n");
    printMatrix(sum, n);
    printf("The multiplication of the matrices:\n");
    printMatrix(mul, n);
    printf("Vertically flipped Array 1:\n");
    verticalFlip(arr1, n);
    printf("Horizontally flipped Array 1:\n");
    horizontalFlip(arr1, n);

    return 0;
}

void readMatrix(int (*p)[100], int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("Enter element (%d, %d): ", r + 1, c + 1);
            scanf("%d", (*(p + r) + c));
        }
    }
}

void printMatrix(int (*p)[100], int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("%3d ", *(*(p + r) + c));
        }
        printf("\n");
    }
}

void addMatrix(int (*p)[100],int (*q)[100], int (*s)[100],int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            *(*(s + r) + c) = *(*(p + r) + c) + *(*(q + r) + c);
        }
    }
}

void multiplyMatrix(int (*p)[100],int (*q)[100], int (*m)[100], int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            *(*(m + r) + c) = 0;
            for (int i = 0; i < n; i++)
            {
                *(*(m + r) + c) += *(*(p + r) + i) * *(*(q + i) + c);
            }
        }
    }
}

void verticalFlip(int (*p)[100], int n) {
    for (int r = n - 1; r > -1; r--) {
        for (int c = 0; c < n; c++) {
            printf("%3d", *(*(p + r) + c));
        }
        printf("\n");
    }
}

void horizontalFlip(int (*p)[100], int n) {
    for (int r = 0; r < n; r++) {
        for (int c = n - 1; c > -1; c--) {
            printf("%3d", *(*(p + r) + c));
        }
        printf("\n");
    }
}