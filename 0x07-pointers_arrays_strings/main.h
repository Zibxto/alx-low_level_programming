#ifndef _MAIN_H
#define _MAIN_H

/**
  * _putchar - writes the character c to stdout
  * @c: param
  * Return: On success 1.
  */
int _putchar(char c);

/**
 * _memset - fills memory wth a constant byte
 * @s: memory area pointed to
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: copies to
 * @src: copies from
 * @n: memory number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be located
 * Return: a pointer to the first occurrence in the char
 */
char *_strchr(char *s, char c);

#endif
