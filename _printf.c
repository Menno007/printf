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
	
	while (format[i] != '\0')
	{
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	if (format[i] == '%')
		result += print_format(format[i++], ap);
	else
		result += write(1, &format[i++], 1);
	}
	return (result);
}
