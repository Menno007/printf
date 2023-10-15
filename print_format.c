#include "main.h"
/**
 * print_char - ss
 * @c: ss
 * Return: ss
*/
int print_char(int c)
{
	return (write(1, &c, 1));
}
/**
 * print_str - ss
 * @str: ss
 * Return: ss
*/
int print_str(char *str)
{
	int string;
	int i = 0;

	while (str[i] != '\0')
	{
		string = putchar(str[i]);
		i++;
	}
	return (string);
}
/**
 * print_format - ss
 * @specifier: ss
 * @ap: ss
 * Return: ss
*/
int print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'r')
		count += rev_string(va_arg(ap, char *));
	else
		count += write(1, &specifier, 1);
	return (count);
}
