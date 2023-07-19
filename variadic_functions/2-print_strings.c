#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - function that print strings followed by a new line
 *@n: number of parameters
 *@separator: string to be printed between numbers
 *Return: strings separeted by a separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n != 0)
	{
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%s%s", va_arg(args, char *), separator);
		else
			printf("%s", va_arg(args, char*));
	}
			printf("%s", va_arg(args, char *));
	}
	printf("\n");
}
