#include "main.h"

/**
 * print_triangle - print triangle with size var
 * @var: size of a triangle to print
 * */

void print_triangle(int var)
{
	if (var < 1)
		_putchar('\n');
	else
	{
		int size = 1;

		do {
			int ii;

			for (ii = 1; ii <= var; ii++)
			{
				if (ii > (var - size))
					_putchar('#');
					else
					{
						int size = 1;

						do {
							int ii;

							for (ii = 1; ii <= var; ii++)
							{
								if (ii > (var - size))
									_Putchar('#');
								else
									_putchar(' ');
							}
							_putchar('\n');
							size++;
						} while (size <= var);
					}
			}
		}
	}
}

