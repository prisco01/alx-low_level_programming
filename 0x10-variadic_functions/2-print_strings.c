#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of args passed
 * @separator: string to be printed between strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;

	va_start(param, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s%s", make_nil(va_arg(param, char *)), separator);
				else
					printf("%s", make_nil(va_arg(param, char *)));
			}
			else
			{
				printf("%s", make_nil(va_arg(param, char *)));
			}
		}
	}
	printf("\n");
	va_end(param);
}

char *make_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";

	return (s);
}
