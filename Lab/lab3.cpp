#include "stdio.h"
#include "conio.h"
int main()
{
	int i;
	char c[30];

	printf("\n\t\t\t\t\tEnter your name, please : ");
	scanf("%s", &c);
	printf("\t\t\t\t\t");
	for (i = 0; i < 37; i++)
	{
		printf("*");
	}
	printf("\n\t\t\t\t\t\t    *** %s ***\n", c);
	printf("\t\t\t\t\t");
	for (i = 0; i < 37; i++)
	{
		printf("*");
	}
	getch();
}
