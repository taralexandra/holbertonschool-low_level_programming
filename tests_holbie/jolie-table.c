#include <stdio.h>

int main() 
{
	 // Boucle pour chaque table de multiplication de 0 à 10
	for (int table = 0; table <= 10; table++)
	{
		printf("Voici la table de %d :\n", table);
	
	// Boucle pour afficher les résultats de la table de multiplication
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", table, i, table * i);
	}

	printf("\n");
	
	return 0;

	}
}

