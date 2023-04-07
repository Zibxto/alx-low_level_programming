#ifndef _MAIN_H
#define _MAIN_H

/**
  * _putchar - writes the character c to stdout
  * @c: param
  * Return: On success 1.
  */
int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s);

/*
 * _print_rev_recursion - prints a string in reverse order
 * @s: string to print
 * Return: void
*/
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to check
 * Return: int
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number
 * @n: number to check
 * Return: int
 */
int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: param1 
 * @y: param2
 * Return: int
 */
int _pow_recursion(int x, int y);

/**
  * get_root - find square root of a number
  * @n: n
  * @root: root to test
  * Return: natural square root, or -1 if not natural root
  */
  
int get_root(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 * Return: int value
 */
int _sqrt_recursion(int n);

/*
 * is_prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @divisor: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int is_prime(int n, int divisor);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 * Return: 1 if n is prime number, else return 0
 */
int is_prime_number(int n);
#endif
