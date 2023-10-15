#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
/*	x = printf("%");
	printf("%d\n" ,x);
	x = _printf("%");
	printf("%d\n" ,x);

	x = printf("%!\n");
	printf("%d\n" ,x);
	x = _printf("%!\n");
	printf("%d\n" ,x);

	x = printf("%K\n");
	printf("%d\n" ,x);
	x = _printf("%K\n");
	printf("%d\n" ,x);

	x = printf("%c",'\0');
	printf("%d\n" ,x);
	x = _printf("%c",'\0');
	printf("%d\n" ,x);

	x = printf(NULL);
	printf("%d\n" ,x);
	x =_printf(NULL);
	printf("%d\n" ,x);
**/
_printf("%");
printf("\n");

//printf("%r");
printf("\n");
x = _printf("%r");
printf("%d\n", x);
printf("\n");

// _printf("%%");
// _printf("\n");
// printf("%%");
// printf("\n");
// _printf("%");
// printf("\n");
// printf("%");
	return (0);
}
