#include <stdio.h>
#include <string.h>

int getString(char (*s)[]);

int main()
{
    char str[100], *ptr = str;
    printf("Enter your name: ");
    gets(ptr);
    printf("Your name: ");
    puts(ptr);
    return 0;
}

int getString(char (*s)[])
{
}
