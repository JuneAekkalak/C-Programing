#include "stdio.h"
#include "conio.h"
int main()
{
	int x, y, z;
	printf(" ## Caution must be positive integers only.## \n");
	printf("input x = ");
	scanf("%d", &x);
	printf("input y = ");
	scanf("%d", &y);
	while (x < 1 || y < 1)
	{
		printf("** must be positive integers only. ** \n");
		printf("input x = ");
		scanf("%d", &x);
		printf("input y = ");
		scanf("%d", &y);
	}
	int a = x, b = y;
	while (y != 0)
	{
		z = y;
		y = x % y;
		x = z;
	}
	printf("Greatest Commond Division of %d and %d is %d", a, b, x);
	getch();
}
