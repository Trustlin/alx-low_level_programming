#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print number
 * @separator: The string to be printed btw numbers
 * @n: integer
 * @...: variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(nums);
}
