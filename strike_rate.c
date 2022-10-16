#include <stdio.h>

float SR(int b,int r){
    return (100*r)/b;
}

int main()
{
    int balls,runs;
    printf("Enter the number of balls faced: ");
    scanf("%d",&balls);
    printf("Enter the number of runs made: ");
    scanf("%d",&runs);
    printf("Strike rate is %.2f",SR(balls,runs));
    return 0;
}
