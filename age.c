#include <stdio.h>

void displayAge(int age){
    printf((age>=18)? "You are an adult":"You are minor");
}
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    displayAge(age);
    return 0;
}
