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

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
			result += print_format(*(++format), ap);
		else
			result += write(1, format, 1);
		++format;
	}
	return (result);
}
