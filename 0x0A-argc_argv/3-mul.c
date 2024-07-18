#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (array of strings)
 * Return: 0 if seccessful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
