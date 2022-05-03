#include <stdio.h>

/**
 * main -prints its name followed by anew line
 * @argc: number of commanf line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - sucess
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
