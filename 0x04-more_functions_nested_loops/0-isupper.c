#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int i)
{
	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	return (0);
}
