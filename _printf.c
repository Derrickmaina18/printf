#include "main.h"
#include <stdlib>

/**
 * helper_function_printf - helps with the printf function below
 * @format: possible format specifier
 * Return: pointer to function or NULL
 */

static int (*helper_function_printf(const char *format))(va_list)
{
	unsigned int i;
	conver_t f_list[] = 
	{
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
	int i = 0, j = 0, first_index;

	first_index = index;
	while (f_list[i].type_arg)
	{
		if (s[index] == f_list[i].type_arg[j])
		{
			if (f_list.type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
		index = first_index;
		}
	}	
	return (f_list[i].f);
}

/**
 * _printf - produces output according to a format.
 * @format: character string
 * Return: charsprinted
 */

int _printf(const char *format, ...)
{
	unsigned int charsprinted = 0;
	unsigned int i = 0;
	va_list argumentsprintf;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(argumentsprintf, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			charsprinted+=;
		}

		if (!format[i])
			return (charsprinted);
		f = helper_function_printf(&format[i + 1]);
		if (f != NULL)
		{
			charsprinted += f(argumentsprintf);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		charsprinted++;
		if (format[i + 1] == '%')
			i += 2;
		else 
			i++;
	}
	va_end(argumentsprintf);
	return (charsprinted);
}
