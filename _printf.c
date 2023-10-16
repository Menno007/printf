#include "main.h"
/**
 * _printf - a clone for the standerd printf
 * @format: the format string
 * Return: NumOfChars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int NumOfChars = 0;
	int i = 0;

	va_start(args, format);
	while (*format)
	{
		if (!*format)
			return (-1);

		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		if (*format != '%')
			NumOfChars += write(1, format, 1);

		else
		{
			format++;
			if (*format == '\0' || *format == 'c' || *format == 's' || *format == '%')
				NumOfChars += print_format(*format, args);
				else
				{
					format--;
						write(1, format, 1);
						NumOfChars++;
				}
		}
		format++;
	}
	va_end(args);
	return (NumOfChars);
}
