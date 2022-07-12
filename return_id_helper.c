#include "main.h"

/**
 * return_id_helper - function that helps to return the amount of identifiers
 *
 * @format: argument identifier
 *
 * Return: amount of identifiers
 */

int return_id_helper(const char *format, int index)
{
	print_t f_list[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (f_list[i].type_arg)
	{
		if (format[index] == f_list[i].type.arg[j])
		{
			if (f_list[i].type_arg[j + i] != '\0')
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
	return (j);
}
