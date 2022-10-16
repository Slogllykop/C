#include <stdio.h>

double getPercentage()
{
    double m;
    printf("Enter your percentage: ");
    scanf("%d", &m);
    return m;
}

int main()
{
    double p = getPercentage();
    if (p >= 90)
        printf("A");
    else if (p < 90 || p >= 80)
        printf("B");
    else if (p < 80 || p >= 70)
        printf("C");
    else if (p < 70 || p >= 60)
        printf("D");
    else if (p < 60 || p >= 50)
        printf("E");
    else if (p < 50)
        printf("F");

    return 0;
}