#include "stdio.h"
#include "conio.h"
int main()
{
	int n, i, j;
	printf("input number : ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("Positive number \n");
		for (i = 1; i <= n; i++)
		{
			printf(" n = %d \n", i);
		}
	}
	else if (n <= -1)
	{
		printf("Negative number \n");
		for (j = -1; j >= n; j--)
		{
			printf(" n = %d \n", j);
		}
	}
	else
	{
		printf("It is zero number ");
	}
	getch();
}
