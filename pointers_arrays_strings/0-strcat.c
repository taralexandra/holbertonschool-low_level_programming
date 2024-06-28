#include "main.h"
#include <stdio.h>

/**
 * *_strcat - check the code
 * @dest: string to append (destination)
 * @src: string to add (source)
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0; // Initialisation de l'indice pour parcourir la chaîne dest
	j = 0; // Initialisation de l'indice pour parcourir la chaîne src

	// Cette boucle permet de trouver la fin de la string dest. 
	while (dest[i] != '\0')
	{
		i++;
	}
	// Boucle qui copie la chaîne src à la fin de string dest
	while (src[j] != '\0')
	{
		dest[i] = src[j]; //copie les caractères  de src à dest
		j++;
		i++;
	}

	dest[i] = '\0'; //Ajout du carac nul à la fin de dest pour finaliser la chaîne

	return (dest); //retourne un pointeur vers dest (la chaîne concaténée)
}
