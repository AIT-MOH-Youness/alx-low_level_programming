#include <stdio.h>

/**
 * main- Entry point
 * Description: Reverse the order of alphabet
 * Return: Zero value
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}

