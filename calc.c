#include <stdio.h>

void add(int a, int b)
{
    printf("Addition: %d", a + b);
}

void sub(int a, int b)
{
    printf("Subtraction: %d", a - b);
}

void mul(int a, int b)
{
    printf("Multiplication: %d", a * b);
}

void div(int a, int b)
{
    printf("Division: %d", a / b);
}

int main()
{
    int choice, a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("1] Addition\n2] Subtrction\n3] Muliplication\n4] Division\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}