#include <_putchar.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar(text[j]);
	}
	_putchar('\n');

	return (0);
}
