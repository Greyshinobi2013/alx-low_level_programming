#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * Description: 'prints sum of two diagonals of a square matrix of integers'
 *
 * @a: integer input
 * @size: integer input
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sumOfDiagonal_1;
	int sumOfDiagonal_2;

	if (size == 3)
	{
		sumOfDiagonal_1 = a[0][0] + a[1][1] + a[2][2];
		sumOfDiagonal_2 = a[2][0] + a[1][1] + a[0][2];
		printf("%d, %d", sumOfDiagonal_1, sumOfDiagonal_2);
	}
	else if (size == 5)
	{
		sumOfDiagonal_1 = a[0][0] + a[1][1] + a[2][2] + a[3][3] + a[4][4];
		sumOfDiagonal_2 = a[4][0] + a[3][1] + a[2][2] + a[1][3] + a[0][4];
		printf("%d, %d", sumOfDiagonal_1, sumOfDiagonal_2);
	}
}
