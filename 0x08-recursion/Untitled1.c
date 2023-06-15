#include<stdio.h>

void printString(char *str)
{
    if(*str == '\0')
    {
        return;
    }
    printf("%c", *str);
    printString(++str);
}

int main()
{
    char str[15] = "Recursed";
    printString(str);
    return 0;
}
