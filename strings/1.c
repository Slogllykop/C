#include <stdio.h>
#include <string.h>

int getLength(char str[]);
void getReversed(char str[], char rstr[]);
void toUpperCase(char str[], char ucstr[]);

int main()
{
    char name[100], rname[100], ucstr[100];
    printf("Enter your name: ");
    gets(name);
    printf("Your name: ");
    puts(name);
    printf("Length of your name: %d", getLength(name));

    printf("\nReversed name: ");
    getReversed(name, rname);
    puts(rname);

    printf("Name in uppercase: ");
    toUpperCase(name, ucstr);
    puts(ucstr);

    return 0;
}

int getLength(char str[])
{
    int i = 0;
    while (str[i++] != '\0')
    {
    }
    return (i - 1);
}

void getReversed(char str[], char rstr[])
{
    int x = 0, len = getLength(str);
    for (int i = (len - 1); i > -1; i--)
    {
        rstr[x++] = str[i];
    }
    rstr[x] = '\0';
}

void toUpperCase(char str[], char ucstr[])
{
    int len = getLength(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((int)str[i] >= 97 && (int)str[i] <= 127)
        {
            ucstr[i] = str[i] - 32;
        }
        else
        {
            ucstr[i] = str[i];
        }
    }
    ucstr[len] = '\0';
}