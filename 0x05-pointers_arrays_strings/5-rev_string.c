#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
*/
void rev_string(char *s)
{
	int a, b, c, d, e;

	a = 0;
	c = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	e = a;
	char str[e];

	for (b = a - 1; b >= 0; b--)
	{
		str[c] = s[b];
		c++;
	}
	for (d = 0; d < a; d++)
	{
		s[d] = str[d];
	}
}
