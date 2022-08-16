#include "stdio.h"
#include "conio.h"
int main()
{
	int r, c;
	do{
		printf("Enter the number of rows  ");
		scanf("%d", &r);
		printf("Enter the number of columns ");
		scanf("%d", &c);
	}while(r < 1 || c < 1);
	int A[r][c], B[r][c], Sum[r][c], Negative[r][c], i, j;
	printf("\nEnter elements of 1st matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element A [%d][%d] : ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nEnter elements of 2st matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element B [%d][%d] : ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	printf("\nelements of 1st matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d  ", A[i][j]);
			if (j == c - 1)
			{
				printf("\n");
			}
		}
	}
	printf("\nelements of 2st matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d  ", B[i][j]);
			if (j == c - 1)
			{
				printf("\n");
			}
		}
	}
	printf("\n Sum result elements of 1st and 2st matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			Sum[i][j] = A[i][j] + B[i][j];
			printf("%d  ", Sum[i][j]);
			if (j == c - 1)
			{
				printf("\n");
			}
		}
	}
	printf("\n Negative result elements of 1st and 2st matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			Negative[i][j] = A[i][j] - B[i][j];
			printf("%d  ", Negative[i][j]);
			if (j == c - 1)
			{
				printf("\n");
			}
		}
	}
	getch();
}
