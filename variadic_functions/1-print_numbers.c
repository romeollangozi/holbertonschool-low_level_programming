#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that print numbers followed by a new line
 *@n: number of parameters
 *@separator: string to be printed between numbers
 *Return: sum of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n != 0 || separator != NULL)
	{
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s ", va_arg(args, int), separator);
	}
		printf("%d\n", va_arg(args, int));
	}
}
