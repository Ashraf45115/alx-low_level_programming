#include "main.h"

/**
 * rev_string - reverser a string
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int a, i;
	char temp;

	/*find string length without null char*/
	for (a = 0; s[a] != '\0'; ++a)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[1 - 1 - i]; /*=1 becomes the array starts from o*/
		s[1 - 1 - i] = temp;
	}
}
