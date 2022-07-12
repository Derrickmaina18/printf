#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - this is a function showing the structure for
 * printer printer functions
 *
 * @type_arg: used as an identifier variable
 * @f: pointer to a printer function
 *
 * Description: program contains struct that stores pointers to a printer functions.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int (*helper_function_printf(const char *format))(va_list)

#endif
