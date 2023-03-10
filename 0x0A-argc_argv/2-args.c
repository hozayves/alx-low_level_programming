#include "main.h"
/**
 * main - function main
 *
 * Description: A program that prints all argments it receive
 * @argc: argument count parameter
 * @argv: argment vector parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
