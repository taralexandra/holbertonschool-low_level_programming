#include <stdio.h>

int add(int a, int b, int c);

int main(void)
{
	int num1, num2, num3, result;

	num1 = 5;
	num2 = 10;
	num3 = 2;

	result = add(num1, num2, num3);

	printf("La somme de %d et %d et %d est %d\n", num1, num2, num3, result);

	return (0);
}

int add(int a, int b, int c)
{
	return a + b + c;
}

