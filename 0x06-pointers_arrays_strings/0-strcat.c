#include "main.h"
#include <string.h>

/**
<<<<<<< HEAD
 * * _strcat - function that concatenates two strings
 * @dest: first param
 * @src: second param
=======
 * *_strcat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
>>>>>>> f5be812b9b690f1aed10a03da90e6d9d4282efe8
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
