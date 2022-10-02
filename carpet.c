#include <stdio.h>

float area(float l, float b){
    return l*b;
}

float charge(float a,float c){
    return a*c;
}

int main()
{
    float length,breadth,charges;
    printf("Enter the length of the room: ");
    scanf("%f",&length);
    printf("Enter the breadth of the room: ");
    scanf("%f",&breadth);
    printf("Enter the carpetting charges: ");
    scanf("%f",&charges);
    printf("The charges for %.2f m sq. room is Rs. %.2f",area(length,breadth),charge(area(length,breadth),charges));
    return 0;
}
