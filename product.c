#include <stdio.h>

int getProduct(int x, int y);
int getProductR(int x, int y);

int main()
{
    int x, y;
    printf("Enter the two numbers: ");
    scanf("%d%d", &x, &y);
    printf("%d x %d = %d", x, y, getProduct(x, y));

    return 0;
}

int getProduct(int x, int y)
{
    int p = 0;
    for (int i = y; i > 0; i--)
    {
        p += x;
    }
    return p;
}

int getProductR(int x, int y)
{
    
}