#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 *create_array - a function that creates an array of chars
 *
 *@size: size of the array
 *
 *@c: character to initialize the array to
 *
 *Return: pointer to the array(success) NULL(failure);
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size > 0)
	{
		arr = malloc(size * sizeof(char));
		if (arr != NULL)
		{
			unsigned int i = 0;

			while (i < size)
			{
				arr[i] = c;
				i++;
			}
		return (arr);

		}
	}
free(arr);

return (NULL);
}
