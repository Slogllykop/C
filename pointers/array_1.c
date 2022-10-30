#include <stdio.h>
#include <math.h>

void readArray(int *p, int n);
void printArray(int *p, int n);
void getMinMax(int *p, int n);
float getAverage(int *p, int n);
void getStandardDeviation(int *p, int n);
void indexOf(int *p, int n);
void valueAt(int *p, int n);
void reverseArray(int *p, int n);
void sortArray(int *p, int n);

int main()
{
    int arr[100];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    readArray(&arr[0], n);
    printArray(&arr[0], n);
    getMinMax(&arr[0], n);
    getStandardDeviation(&arr[0], n);
    indexOf(&arr[0], n);
    valueAt(&arr[0], n);
    reverseArray(&arr[0], n);
    sortArray(&arr[0], n);
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
    printf("The array is: [ ");
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

void indexOf(int *p, int n)
{
    int value;
    printf("\nEnter the value to find the index of: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) == value)
        {
            printf("Index of %d: %d", value, i);
            break;
        }
    }
}

void valueAt(int *p, int n)
{
    int index;
    printf("\nEnter the index to find the value at: ");
    scanf("%d", &index);
    printf("Value at %d: %d", index, *(p + index));
}

void reverseArray(int *p, int n)
{
    printf("\nReversed array is: [ ");
    for (int i = n - 1; i > -1; i--)
    {
        if (i == 0)
        {
            printf("%d", *(p + i));
        }
        else
        {
            printf("%d, ", *(p + i));
        }
    }
    printf(" ]");
}

// selection sort
void sortArray(int *p, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("\nThe sorted array is: [ ");
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