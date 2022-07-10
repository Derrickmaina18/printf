#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string
 * Return: charsprinted
 */

static int(const char *format,)
{
	int charsprinted;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};

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
