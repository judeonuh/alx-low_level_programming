#include <stdio.h>
#include <stdlib.h>

/**
* main - print numbers
*
* Return: Always (Success)
*/
int main()
{
    int n = 0;

    while (n <=9)
    {
        putchar(n + '0');
        ++n;
    }
    putchar('\n');
    return 0;
}
