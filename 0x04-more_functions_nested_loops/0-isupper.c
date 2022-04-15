#include "main.h"
/**
 * _isupper- Write a function that checks for uppercase character.
 * @c: character to be checked
 * return: returns 1 if c is uppercase and returns 0 otherwise.
 */
int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
		return (1);
		}
	}
		return (0);
}
