#include "main.h"
/**
 * _printf - printf
 * @format: ss
 * Return: ss
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int result = 0, i = 0;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
			return (-1);
		if (*format == '%')
			result += print_format(*(++format), ap);
		else
			result += write(1, format, 1);
		++format;
		++i;
	}
	return (result);
}
