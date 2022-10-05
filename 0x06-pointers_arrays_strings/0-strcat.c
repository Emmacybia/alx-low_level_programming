#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

<<<<<<< HEAD
	for (index = 0; src[index]; index++)
		dest[index_len++] = scr[index];
=======
	for (index = 0; scr[index]; index++)
		dest[dest_len++] = src[index];
>>>>>>> 95e90eea3f9edfb4763189714f9c3d29ea093baa

	return (dest);
}
