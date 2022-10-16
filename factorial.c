#include <stdio.h>

void getFactorial(int n);
int recursion(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Using loop = ");
    getFactorial(n);
    printf("\nUsing recursion = %d", recursion(n));

    return 0;
}

void getFactorial(int n)
{
    int fact = 1;
    do
    {
        fact *= n;
        n--;
    } while (n > 0);
    printf("%d", fact);
}

int recursion(int n)
{
    if (n >= 1)
        return n * recursion(n - 1);
    else
        return 1;
}