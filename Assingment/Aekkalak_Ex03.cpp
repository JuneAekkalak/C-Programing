#include "stdio.h"
#include "conio.h"
int main()
{
	int base, div;
	int i = 0;

	printf("Enter your base : ");
	scanf("%d", &base);
	printf("Enter your div : ");
	scanf("%d", &div);

	while (base >= div)
	{
		base = base - div;
		i += 1;
	}
	printf("result = %d \n", i);
	printf("scrap = %d", base);
	getch();
}
