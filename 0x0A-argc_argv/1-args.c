#include "main.h"
/**
 * main - function main
 *
 * Description: A program that prints the number of arguments passed into it
 * @argc: argument count parameter
 * @argv: argument vector parameter
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
