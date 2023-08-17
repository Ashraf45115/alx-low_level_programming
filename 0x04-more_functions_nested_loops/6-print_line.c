#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times _ character
 *   should be printed
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; inchr <= n; inchr++)
			_putchar('_');
		_putchar('\n');
	}
}
