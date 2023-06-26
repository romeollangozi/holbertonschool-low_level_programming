#include "main.h"
#include <string.h>
/**
 *puts_half - function that prints half of a string
 *@str: string
 */
void puts_half(char *str)
{	int i;

	if (strlen(str) % 2 == 0)
		i = (strlen(str) / 2) - 1;
	else
		i = (strlen(str) - 1) / 2;
	while (str[i] != '\0')
	{	i++;
		_putchar(str[i]);
	}
		_putchar('\n');
}
