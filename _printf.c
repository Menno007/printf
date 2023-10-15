#include "main.h"
/**
 * _printf - printf
 * @format: ss
 * Return: ss
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int result = 0;
	int i = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
			result += print_format(format[i + 1], ap);
			i++;
			}
		}
		else
			write(1, &format[i], 1);
		++i;
	}
	return (result);
}
