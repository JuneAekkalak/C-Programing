#include "stdio.h"
#include "conio.h"
int main()
{
	float r, h, volume;
	printf("input r = ");
	scanf("%f", &r);
	printf("input h = ");
	scanf("%f", &h);
	volume = 3.14 * r * r * h;
	printf("Volume = %.2f", volume);
	getch();
}
