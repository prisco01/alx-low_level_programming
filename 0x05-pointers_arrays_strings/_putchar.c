#include <unistd.h>

/**
* _putchar - writes character c to stdout
*@c: character to be printed
*Return: on success 1
*/

Int _putchar(char c)
{
	return (write(1, &c, 1));
}
