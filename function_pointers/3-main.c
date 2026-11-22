#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, error code otherwise
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') &&
	    atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
