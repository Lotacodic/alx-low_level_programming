#include "main.h"

/**
 * print_most_numbers - excludes some numbers with
 *
 * an if condition which are 2 and 4
 *
 * _putchar - displays the results to the stdout
 *
 * Return: 0 as success.
 */

void print_most_numbers(void)
{
	int startNum_0;

	startNum_0 = '0';
	for (; startNum_0 <= '9'; startNum_0++)
	{
		if (startNum_0 != '2' && startNum_0 != '4')
			_putchar(startNum_0);
	}
	_putchar('\n');
}
