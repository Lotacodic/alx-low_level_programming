#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase, 0 otherwise.
*/
int _isupper(int c)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
	if (c == i)
	{
		return (1);
	}
}               
                return (0);
}
