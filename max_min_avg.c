#include <stdio.h>

int getMax(int a, int b, int c)
{
    if (a > b)
        return (a > c) ? a : c;
    else if (b > a)
        return (b > c) ? b : c;
    else
        return a;
}

int getMin(int a, int b, int c)
{
    if (a < b)
        return (a < c) ? a : c;
    else if (b < a)
        return (b < c) ? b : c;
    else
        return a;
}

int getAvg(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Max: %d", getMax(a, b, c));
    printf("\nMin: %d", getMin(a, b, c));
    printf("\nAvg: %d", getAvg(a, b, c));

    return 0;
}