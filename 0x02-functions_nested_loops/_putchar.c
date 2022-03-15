#include <unistd.h>

/**
 *_putcjar - writes the character c to stdout
 *@c: the character to print
 *
 *Return: on sucess 1.
 *on error, -1 returned, and errno is set appropriatelt.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
)
