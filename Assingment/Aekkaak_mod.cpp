#include "stdio.h"
#include "conio.h"
int main()
{
	int a;
	printf("input value is : ");
	scanf("%d", &a);
	while (a < 1)
	{
		printf("must more than zero\n");
		printf("input new value is : ");
		scanf("%d", &a);
	}
	if (a % 2 == 0)
	{
		printf("Even");
	}
	else
		printf("odd");
	getch();
}
