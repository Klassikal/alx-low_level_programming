#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9 excluding 2 and 4
 *
 */

void print_most_numbers(void)
{
	int var = 0;

	do {
		if (var == 4 || var == 2)
<<<<<<< HEAD

=======
			
>>>>>>> f78aa28684d520301812019004a1b2e2ecb2eb1c
		{
			var++;
			continue;
		}
		else
			_putchar(var + '0');
		var++;
	} while (var < 10);

	_putchar('\n');
}
