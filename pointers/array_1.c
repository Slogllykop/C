#include <stdio.h>
#include <math.h>

void readArray(int *p, int n);
void printArray(int *p, int n);
void getMinMax(int *p, int n);
float getAverage(int *p, int n);
void getStandardDeviation(int *p, int n);

int main()
{
    int arr[100];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    readArray(&arr[0], n);
    printArray(&arr[0], n);
    getMinMax(&arr[0], n);
    // getAverage(&arr[0], n);
    getStandardDeviation(&arr[0], n);
    return 0;
}

void readArray(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", p + i);
    }
}

void printArray(int *p, int n)
{
    printf("The array is: \n[ ");
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", *(p + i));
        }
        else
        {
            printf("%d, ", *(p + i));
        }
    }
    printf(" ]\n");
}

void getMinMax(int *p, int n)
{
    int min = *p, max = *p;
    for (int i = 0; i < n; i++)
    {
        (*(p + i) < min) ? min = *(p + i) : min;
        (*(p + i) > max) ? max = *(p + i) : max;
    }
    printf("Minimum: %d\nMaximum: %d\n", min, max);
}

float getAverage(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(p + i);
    }
    printf("Average: %d", sum / n);
    return sum / n;
}

void getStandardDeviation(int *p, int n)
{
    int average = getAverage(&p[0], n);
    int sumOfSquares = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfSquares += (*(p + i) - average) * (*(p + i) - average);
    }
    printf("\nStandard Deviation: %f", sqrt(sumOfSquares));
}