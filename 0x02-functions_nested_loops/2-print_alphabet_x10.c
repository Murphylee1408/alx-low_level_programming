#include "main.h"
/**
 * Print_alphabet_x10 - prints 10 times the alphabet, in lower case
 * 
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;
	i = 0;
	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_puitchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
