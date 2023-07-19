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
	char *t;

	va_start(args, n);
	if (n != 0)
	{
	for (i = 0; i < n - 1; i++)
	{
		t = va_arg(args, char *);
		if (separator != NULL)
		{
			if (t != NULL)
				printf("%s%s", t, separator);
			else
			{
				printf("(nil)%s", separator);
			}

		}
		else
			printf("%s", t);
	}
		t = va_arg(args, char *);
		if (t != NULL)
			printf("%s", t);
		else
			printf("(nil)");
	}
	printf("\n");
}
