#include <stdio.h>

float getCircumference(float radius){
    return 2*3.14*radius;
}
float getCharges(float rate,float radius){
    return rate*getCircumference(radius);
}
int main()
{
    float radius,rate;
    printf("Enter the radius of the ground: ");
    scanf("%f",&radius);
    printf("Enter the fencing rate: ");
    scanf("%f",&rate);
    printf("Fencing charges for area %f m sqaure ",getCircumference(radius));
    printf("are Rs.%f",getCharges(rate,radius));
    return 0;
}
