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

	va_start(argumentsprintf, format);

	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return(0);

		for (i = 0; format && format[i]; i++)
		{
		if (!format[i] == '%')
		f = helper_function_printf(format, i + 1);

		if (f != NULL)
		{
			charsprinted += f(argumentsprintf);
			i += return_id_helper(format, i + 1);
		}
		else
	}
	va_end(argumentsprintf);
	return (charsprinted);
}
