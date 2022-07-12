#include "main.h"

/**
 * helper_function_printf - checks for the specifier then selects the
 * correct function to perform the operation.
 *
 * @s: argument identifier
 * @index: index for argument identifier
 *
 * Return: pointer to a function.
 */

int (*helper_function_printf(const char *format))(va_list)
{
	unsigned int i;
	print_t f_list[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	for (i = 0; f_list.type_arg != NULL; i++)
	{
		if (*(f_list[i].type_arg) == *format)
		{
			break;
		}
	}
	return (f_list[i].f);
}
