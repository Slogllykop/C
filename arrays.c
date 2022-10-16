#include <stdio.h>

void showMenu(int arr[], int size);
void getArray(int arr[], int size);
void getMax(int arr[], int size);
void getMin(int arr[], int size);
void getAverage(int arr[], int size);
void getReverse(int arr[], int size);
void getStandardDeviation(int arr[], int size);
void sort(int arr[], int size);

int main()
{
    int noe, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &noe);

    getArray(arr, noe);
    showMenu(arr, noe);

    return 0;
}

void showMenu(int arr[], int size)
{
    int choice;
    printf("1] Maximum\n2] Minimum\n3] Average\n4] Reverse\n5] Standard Deviation\n6] Sort\nEnter the choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case (1):
        getMax(arr, size);
        break;
    case (2):
        getMin(arr, size);
        break;
    case (3):
        getAverage(arr, size);
        break;
    case (4):
        getReverse(arr, size);
        break;
    case (5):
        getStandardDeviation(arr, size);
        break;
    case (6):
        sort(arr, size);
        break;
    default:
        printf("Invalid choice");
    }
}

void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nThe maximum element is %d", max);
}

void getMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nThe minimum element is %d", min);
}

void getAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("\nThe average of the elements is %d", sum / size);
}

void getReverse(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    printf("\nThe reversed array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void getStandardDeviation(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int mean = sum / size;
    int sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        sum2 += (arr[i] - mean) * (arr[i] - mean);
    }
    printf("\nThe standard deviation is %d", sum2 / size);
}

void sort(int arr[], int size)
{
    int min, temp;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}