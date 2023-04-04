#include "main.h"

 /**
   * _strspn - gets the length of a prefix substring and  returns length
   * @s: string to check
   * @accept: character length to be checked
   * Return: number of bytes in the initial segment of s
   */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
			break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			return (matches);
		}
		i++;
	}
	return (matches);

}
