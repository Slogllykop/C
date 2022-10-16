#include <stdio.h>
#include <math.h>

int isCubeRoot(int a, int b)
{
    int c = pow(b, 3);
    return (a == c) ? 1 : 0;
}

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (isCubeRoot(a, b))
        printf("Is Cube Root");
    else
        printf("Not Cube Root");

    return 0;
}