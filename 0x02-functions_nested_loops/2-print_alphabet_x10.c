#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, en;

	en = 0;

	while (en < 10)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		en++;
		_putchar('\n');

	}
	return (0);
}
