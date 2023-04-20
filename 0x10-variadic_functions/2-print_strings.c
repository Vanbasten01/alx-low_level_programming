#include "variadic_functions.h"
/**
 *print_strings - a function that prints strings, followed by a new line.
 *@separator:the string separator.
 *@n:number of arguments.
 *Return:void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *s;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
		if (separator != NULL && (i != n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}


