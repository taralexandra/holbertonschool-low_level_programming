#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;
//Ici, les caract st copiés jusqu'à arriver au car nul ou que i atteigne n
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
//Si on a pas encore atteint n caractères alors on ajoute des caractères nuls. 
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
