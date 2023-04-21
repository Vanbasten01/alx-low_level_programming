
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - a function that prints anything, followed by newline
 * @format: a list of types of arguments passed to the function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, seg = 0;
	va_list args;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				seg = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				seg = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				seg = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				seg = 1;
				break;
		}
		++i;
		if (seg == 1 && format[i])
		{
			printf(", ");
			seg = 0;
		}
	}
	va_end(args);
	printf("\n");
}
