#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string
 * Return: charsprinted
 */

int _printf(const char *format, ...)
{
	int charsprinted = 0, int i = 0;
	va_list argumentsprintf;
	char ;

	va_start(argumentsprintf, format);

	for (; format; i++)
	{
		if (format[i] == '%')
		{
			if (format == NULL)
				return(-1);
			else if(format[i + 1] == '\o')
			{
				return(-1);
			}
			else if (format[i] == 'c')
			{
				_putchar("c\n");
			}
			else if (format[i] == 's')
			{
				_putchar("s\n");
			}
		_putchar("%\n");
		return (0);
		}
		i++;
		else
		return (NULL);
	}
	va_end(argumentsprintf);
	return (charsprinted);
}
