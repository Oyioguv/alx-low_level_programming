#include <stdio.h>

/**
 * main - Print the alphabet, lower and upper case.
 *
 * Return: 0
 */
int main(void)
{
	char z = 'a';
	char cz = 'A';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}

	while (cz <= 'Z')
	{
		putchar(cz);
		cz++;
	}
	putchar('\n');
	return (0);
}
