#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root
 * sqrtec - function
 * @root: root
 */
int sqrtrec(int n, int root)
{
	if (root * root == n)
	return (root);
	if (root == n / 2)
	return (-1);
	else
	sqrtrec(n, root + 1);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 1)
	return (n);
	else
	return (sqrtrec(n, 0));
}
