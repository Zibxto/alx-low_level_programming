#ifndef _MAIN_H
#define _MAIN_H

/**
  * _putchar - writes the character c to stdout
  * @c: param
  * Return: On success 1.
  */
int _putchar(char c);


/**
  * _strcat - function to check
  * @dest: param
  * @src: param
  * Return: char value
  */
char *_strcat(char *dest, char *src);

/**
  * _strncat - function to check
  * @dest: text1
  * @src: text2
  * @n: number of bytes of text2
  * Return: concatenated string
  */
char *_strncat(char *dest, char *src, int n);

/**
  * _strncat - function to check
  * @dest: text1
  * @src: text2
  * @n: number of bytes of text2
  * Return: new copy of string
  */
char *_strncpy(char *dest, char *src, int n);

/**
  * _strcmp - function to check
  * @s1: string 1
  * @s2: string 2
  * Return: int value
  */
int _strcmp(char *s1, char *s2);

/**
  * reverse_array - function to check
  * @a: param 1
  * @n: param 2
  * Return: void
  */
void reverse_array(int *a, int n);

/**
  * string_toupper - function to check
  * Return: char value
  */
char *string_toupper(char *s);

#endif
