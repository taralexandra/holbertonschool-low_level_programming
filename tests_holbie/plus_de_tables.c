#include <stdio.h>

int main() {
    // Boucle pour chaque multiplicateur de 0 à 10
    for (int multiplicateur = 0; multiplicateur <= 10; multiplicateur++) {
        // Afficher l'en-tête de la table
        printf("Voici la table de %d :\n", multiplicateur);
        
        // Boucle pour chaque multiplicande de 0 à 10
        for (int multiplicande = 0; multiplicande <= 10; multiplicande++) {
            // Calculer et afficher la multiplication
            int resultat = multiplicateur * multiplicande;
            printf("%d x %d = %d\n", multiplicateur, multiplicande, resultat);
        }
        
        // Ligne vide entre les tables
        printf("\n");
    }

    return 0;
}
