#include <stdio.h>

void recursion(int n, int first, int next);
void getFibonacci(int n);

int main()
{
    int n;
    printf("Fibonacci series upto how many terms: ");
    scanf("%d", &n);
    
    printf("Using loop = ");
    getFibonacci(n);
    printf("\nUsing recursion = ");
    recursion(n, 0, 1);

    return 0;
}

void getFibonacci(int n)
{
    int first = 0, next = 1, sum;
    do
    {
        if (n == 0)
        {
            continue;
        }
        else
        {
            sum = first + next;
            printf("%d ", first);
            first = next;
            next = sum;
            n--;
        }
    } while (n > 0);
}

void recursion(int n, int first, int next)
{
    int sum;
    if (n > 0)
    {
        sum = first + next;
        printf("%d ", first);
        first = next;
        next = sum;
        n--;
        recursion(n--, first, next);
    }
}