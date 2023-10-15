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
	x = printf("%");
	printf("%d\n" ,x);
	x = _printf("%");
	printf("%d\n" ,x);

	return (0);
}
