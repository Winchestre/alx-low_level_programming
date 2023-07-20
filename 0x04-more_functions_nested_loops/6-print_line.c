#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: argument
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
	_putchar('\n');
}