#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	i = 'A';
	printf("%i: %d\n", i, _isupper(i));
	i = 'a';
	printf("%i: %d\n", i, _isupper(i));
	return (0);
}
