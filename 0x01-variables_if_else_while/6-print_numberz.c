#include <stdio.h>

/**
 * main- Entry point
 * Description: Print numbers from 0 to 9 as char
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}

