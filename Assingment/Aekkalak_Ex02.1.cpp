#include "stdio.h"
#include "conio.h"

int main()
{
	int n;
	int front, back;
	do
	{
		printf("Input number 1-99 : ");
		scanf("%d", &n);
	} while (n < 1 || n > 99);

	front = n / 10;
	back = n % 10;

	if (front == 7 || back == 7)
	{
		printf("Buzz");
	}
	else if (n % 7 == 0)
	{
		printf("Buzz Buzz");
	}
	else
		printf("%d", n);

	getch();
}
