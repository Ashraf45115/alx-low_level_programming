include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through are array
	 * where if there is no null byte
	 * amonmg the first n byte of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 * if the length of source is lest than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
