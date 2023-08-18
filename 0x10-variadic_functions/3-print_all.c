#include "variadic_functions.h"

/**
 * print_char - Entry point
 * @sep: para
 * @va: para
*/

void print_char(char *sep, va_list va)
{
	printf("%s%c", sep, va_arg(va, int));
}
/**
 * print_int - Entry point
 * @sep: para
 * @va: para
*/
void print_int(char *sep, va_list va)
{
	printf("%s%d", sep, va_arg(va, int));
}
/**
 * print_float - Entry point
 * @sep: para
 * @va: para
*/
void print_float(char *sep, va_list va)
{
	printf("%s%f", sep, va_arg(va, double));
}
/**
 * print_string - Entry point
 * @sep: para
 * @va: para
*/
void print_string(char *sep, va_list va)
{
	char *str = va_arg(va, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", sep, str);
}
/**
 * print_all - Entry point
 * @format: para
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list va;
	token_t tokens[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(va, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, va);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(va);
}
