#include <stdio.h>

void print_table(int n);

int main()
{
	int number;

	printf("Entrez un nombre pour afficher sa table de multiplication : ");
    	scanf("%d", &number);

	print_table(number);

	return (0);
}

void print_table(int n)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("Voici le calcul de %d x %d = %d\n", n, i, n * i);
	}

}
