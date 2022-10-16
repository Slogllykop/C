#include <stdio.h>

int isFactor(int a, int b){
    return (b%a==0)? 1:0;
}

int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    
    if (isFactor(a,b))
        printf("Is Factor");
    else
        printf("Not Factor");

    return 0;
}