#include "main.h"
/**
 * print_format - handels %s and %c and %%
 *
 * @format: the fprmat saci..
 *
 * @args: the args list
 *
 * Return: numofchars
 */

int print_format(char format, va_list args)
{
	int NumOfChars = 0;
	char c, x, X, b, *s;

	while (format)
	{
		if (format == '\0')
			break;
		else if (format == 'c')
		{
			c = va_arg(args, int);
			NumOfChars += print_char(c);
		}
		else if (format == 's')
		{
			s = va_arg(args, char*);
			NumOfChars += print_string(s);
		}
		else if (format == 'b')
		{
			b = va_arg(args, unsigned int);
			NumOfChars += print_digit(b, 2);
		}
		else if (format == 'X')
		{
			X = va_arg(args, unsigned int);
			NumOfChars += print_digit(X, 16);
		}
		else if (format == 'x')
		{
			x = va_arg(args, unsigned int);
			NumOfChars += print_digit(x, 16);
		}
		else if (format == '%')
			NumOfChars += print_percent();
		else
			format++;
		format++;
	}
	return (NumOfChars);
}
