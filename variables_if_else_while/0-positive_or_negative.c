#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
*Main function below it picks a random number and stores
*it in variable n and using if else statements
*we print out if it is negative positive or zero
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
