#include "main.h"

/**
 * helper_function_printf - checks for the specifier then selects the
 * correct function to perform the operation.
 *
 * @format: possible format specifier.
 * @index: index for the format
 *
 * Return: pointer to a function.
 */

int (*helper_function_printf(const char *format, int index))(va_list)
{
	print_t f_list[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (f_list[i].type_arg)
	{
		if (format[index] == f_list.type_arg[j])
		{
			if (f_list[i].type.arg[j + 1] '\0')
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
