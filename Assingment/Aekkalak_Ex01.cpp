#include "stdio.h"
#include "conio.h"
int main()
{
	int n, sum = 0, i = 1;
	printf("Input N = ");
	scanf("%d", &n);

	while (i <= n)
	{
		sum = sum + i;
		printf("%d  \n", i);
		i++;
	}
	printf("sumN = %d", sum);
	getch();
}
