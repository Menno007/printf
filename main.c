#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
/*
int main(void)
{
	int x;
x = _printf("%!\n");
printf("%d\n", x);
x = printf("%!\n");
printf("%d\n", x);
x = _printf("%K\n");
printf("%d\n", x);
x = printf("%K\n");
printf("%d\n", x);
	return (0);
}
*/
int main(void)
{
    int len, len2;

    len = _printf(NULL);
    len2 = printf(NULL);
    fflush(stdout);
    if (len != len2)
    {
        printf("Lengths differ.\n");
        fflush(stdout);
        return (1);
    }
    return (0);
}
