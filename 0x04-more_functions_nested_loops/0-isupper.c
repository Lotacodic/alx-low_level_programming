#include "main.h"
/**
 * main.h- Write a function that checks for uppercase character.
 * return: returns 1 if c is uppercase and returns 0 otherwise.
*/
 int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
