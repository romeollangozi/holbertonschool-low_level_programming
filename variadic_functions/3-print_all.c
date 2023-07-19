#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 *print_all - function that prints everything
 *@format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *t;
	char *separator = ", ";
	int length = (int) strlen(format);

	va_start(args, format);
	while (i <= length - 1)
	{
		if (i == length - 1)
			separator = "";
		switch (format[i])
		{
			case 's':
				t = va_arg(args, char *);
				if (t != NULL)
				{
					printf("%s%s", t, separator);
					i++;
					break;
				}
					printf("(nil)%s", separator);
					i++;
					break;
			case 'i':
				printf("%d%s", va_arg(args, int), separator);
				i++;
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				i++;
				break;
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				i++;
				break;
			default:
				i++;
				break;
		}
	}
		printf("\n");
}
