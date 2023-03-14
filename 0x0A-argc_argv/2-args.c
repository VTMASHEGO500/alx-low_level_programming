#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count Arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
		return (0);
	}
}
