#include "stdio.h"
#include "conio.h"
int main()
{
	int num, price, sumprice, money, change, i;
	do
	{
		printf("input num product is : ");
		scanf("%d", &num);
	} while (num <= 0);
	for (i = 0; i < num; i++)
	{
		printf("Input product price :");
		scanf("%d", &price);
		sumprice = sumprice + price;
	}
	printf("sumprice is %d \n", sumprice);
	do
	{
		printf("input money user is : ");
		scanf("%d", &money);
		if (money < sumprice)
		{
			printf("your money less than price of product\n");
		}
	} while (money < sumprice);
	change = money - sumprice;
	printf("your change is %d", change);
	getch();
}
