#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *main - check the code
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{	
	int result;
	int (*function)(int,int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "*") == 0)) &&
			(argv[1] == 0 || argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}*/
	function= get_op_func(argv[2]);
	if (*function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = function(atoi(argv[1]),atoi(argv[3]));
	printf("%d\n",result);
	return (0);
}
