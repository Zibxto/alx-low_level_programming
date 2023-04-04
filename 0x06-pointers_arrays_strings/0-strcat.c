#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: string 1
  * @src: string 2
  * Return: char result
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int in = 0;

	while (dest[i] != '\0')
	{
					
		i++;
	
	}

	while (src[in] != '\0')
	{

		dest[i] = src[in];
	
		i++;
	
		in++;
	
	}



	dest[i] = '\0';
	return (dest);
}
