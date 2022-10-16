#include <stdio.h>

int isMultiple(int a, int b){
    return (a % b == 0)? 1:0;
}

int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    if (isMultiple(a,b))
        printf("Is Multiple");
    else
        printf("Not Multiple");
    
    return 0;
}