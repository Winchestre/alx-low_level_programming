#include "main.h"

/**
 * print_diagonal - print n number of diagonal lines
 * @n: n number of lines printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
