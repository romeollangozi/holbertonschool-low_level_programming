#include <stdio.h>
#include "main.h"
/**
 * set_string - changes pointer address
 * @s: pointer to be changed
 * @to: pointer to be changed to
 */

void set_string(char **s, char *to)
{
	(void) *to;
	*s = to;
}
