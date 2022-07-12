#include "main.h"
#include <stdlib>

/**
 * _printf - produces output according to a format specified.
 *
 * @format: list of argument types passed to the function.
 *
 * Return: charsprinted (number of characters printed)
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, charsprinted = 0;
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
			charsprinted++;
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
