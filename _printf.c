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
	unsigned int charsprinted = 0;
	unsigned int i = 0;
	va_list argumentsprintf;
	int (*function)(va_list);
	char ;

	if (format == NULL)
		return (-1);

	va_start(argumentsprintf, format);

	while (format[i])
	{
		for (; format[i]; i++)
		{
			if (format[i] == '%')
			{
				_putchar(format[i]);
				i++;
			}
			else if (!format[i])
				return (charsprinted);

			function = helper_function_printf(&format[i + 1]);

			else if
			{	(format[i + 1] == NULL)
				return(-1);
			}
			else if (format[i] == 'c')
			{
				_putchar(format[i]);
				i++;
			}
			else if (format[i] == 's')
			{
				_putchar(format[i]);
				i++;
			}
			else
				i++;
		}
		charsprinted++;
	}
	va_end(argumentsprintf);
	return (charsprinted);
}
