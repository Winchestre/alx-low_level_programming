#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description - Prints the last digit of random number
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = n % 10;
	if (lastNum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	} else if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}
	return (0);
}
