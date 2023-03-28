#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: param
 * Return: On success 1.
 */
int _putchar(char c);

/**
 * reset_to_98 - function to check
 * @n: pointer argument
 * Description: takes a pointer to an int as parameter.
 */
void reset_to_98(int *n);

/**
 * swap_int - Swaps the value of two integers
 * @a: int argument
 * @b: int argument
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: parameter
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @str: param
 * Return: void
 */
void _puts(char *str);

/**
 * print_rev - function to check
 * @s: param
 * Return: void
 */
void print_rev(char *s);

/**
 * puts2 - function to check
 * @str: param
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - function to check
 * @str: param
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - function to check
 * @a: param
 * @n: param
 * Return: void
 */
void print_array(int *a, int n);

/**
 * *_strcpy - function to check
 * @dest: param
 * @src: param
 * Return: char value
 */
char *_strcpy(char *dest, char *src);
#endif
