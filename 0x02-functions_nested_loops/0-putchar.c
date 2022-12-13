#include <holberton.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
