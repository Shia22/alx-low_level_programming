#include "main.h
/**
 * main - prints _put
 *
 * Return: 0 (Success)
 */

int main(void) {
	char *ch = "_putchar";
	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n'); return (0);
}
