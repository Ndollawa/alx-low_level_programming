#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limit.h>

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
int x, y;
unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}
	for(x =1;x< argc;x++){
		for(y=0;argv[x][y] != '\0';y++){
			if(argv[x][y] > 57 || argv[x][y]<48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	
	mul= atol(argv[1]) * atol(argv[2]);
	
	printf("%lu\n", mul);
	return (0);
}
