#include <unistd.h>
/**
 * Main: Entry point
 *
 * Description: A simple program that display without puts or prints
 * WE're goinf to include unistd library
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char sentence = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, sentence, 59);
	return (1);
}
