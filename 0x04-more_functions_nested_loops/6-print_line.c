#include "main.h"

/**
 * print_line - prints a straight line in terminal
 * @n: the number of times '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
