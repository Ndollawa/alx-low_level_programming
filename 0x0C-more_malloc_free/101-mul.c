#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * mul - Return a multiplation of two integer numbers
 * @numone: first number.
 * @numtwo: length of the char array.
 *
 * Return: int.
 */
unsigned long mul(int numone, int numtwo)
{
	return (numone*numtwo);
}

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
unsigned long result;

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
	
	result= mul(argv[1], argv[2]);
	
	printf("%d\n", result);
	return (0);
}
