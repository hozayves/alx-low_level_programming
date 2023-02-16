#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A simple program that display without puts or prints
 * we're goinf to include unistd library
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}
