#include "main.h"

/** _strncat - this function concatenates 2 strings n times
 *
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes from source
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)}
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
