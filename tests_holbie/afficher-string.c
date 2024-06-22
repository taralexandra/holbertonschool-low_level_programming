#include <stdio.h>

int main() 
{
	// Déclaration d'un tableau de caractères pour stocker la phrase

	char phrase[100];
	
	// Demander à l'utilisateur d'entrer une phrase

	printf("Entrez une phrase : ");
	scanf("%99[^\n]", phrase);

	// Afficher la phrase entrée par l'utilisateur
	printf("Vous avez entré : %s\n", phrase);

	return 0;
}
