#include "main.h"
#include <unistd.h>
/**
 *
 * _putcher - writes he character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriatly
 */
in _putcher(char c)
{
	return(write(1, &c, 1));
}
