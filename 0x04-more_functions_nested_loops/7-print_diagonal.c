#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
<<<<<<< HEAD
 * Return: nothings
 */
=======
 * @n: is the number of times the \ character
 *     should be printed
*/

>>>>>>> 45cbc36d75ff1bf13fa7fc3c2a06e54c864289ce
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
