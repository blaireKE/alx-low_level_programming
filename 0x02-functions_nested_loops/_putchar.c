#include <unistd.h>

/**
 * _putchar - writes the caharacter c to the stdout
 * @c: The character to print
 * Return: 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
