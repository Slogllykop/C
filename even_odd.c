#include <stdio.h>

// int input(char a[]){
//     int b;
//     printf("%s",a);
//     scanf("%d",&b);
//     return b;
// }

int isEven(int a)
{
    return (a % 2 == 0) ? 1 : 0;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isEven(n))
        printf("Even");
    else
        printf("Odd");
    return 0;
}