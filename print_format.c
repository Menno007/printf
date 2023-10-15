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

	string = 0;
	if (str == NULL)
	{
		string += write(1, "(null)", 6);
	return (string);
	}
	while (str[i] != '\0')
	{
		string += write(1, &str[i], 1);
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
	else
		count += write(1, &specifier, 1);
	return (count);
}
