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
	int length = strlen(format);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (i == length - 1)
			separator = "";
		switch (format[i])
		{
			case 's':
				t = va_arg(args, char *);
				if (t != NULL)
				{
					printf("%s%s", t, i == length - 1 ? "" : separator);
					break;
				}
					printf("(nil)%s", separator);
					break;
			case 'i':
				printf("%d%s", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			default:
				break;
		}
		i++;
	}
		printf("\n");
}
