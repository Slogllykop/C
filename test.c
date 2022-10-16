#include<stdio.h>
#include<stdbool.h>

bool check(int a){
    if(a>=18)
        return true;
    else
        return false;
}

int main(){
    if (check(19))
        printf("YES");
    else 
        printf("NO");
    return 0;
}