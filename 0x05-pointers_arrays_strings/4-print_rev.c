#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: string to be checked
 * Return: void
*/
void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
