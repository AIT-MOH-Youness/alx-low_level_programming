#include "main.h"
/**
 * _strlen - returns the length of a string
 * @string :string
 * Return: length
 */
int _strlen(char *string)
{
	int len  = 0;

	while (*string != '\0')
	{
		len++;
		string++;
	}

	return (len);
}

