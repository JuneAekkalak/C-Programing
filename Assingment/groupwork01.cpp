#include "stdio.h"
#include "conio.h"
int main()
{
	int d, m, y, dim;
	do
	{
		do
		{
			printf("day is ");
			scanf("%d", &d);
			printf("month is ");
			scanf("%d", &m);
			printf("year is ");
			scanf("%d", &y);
		} while (d <= 0 || d > 31 || m <= 0 || m > 12 || y == 0);
		// module caculation day in month start
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			dim = 31;
		}
		else if (m == 2)
		{
			if (y % 4 == 0)
			{
				dim = 29;
			}
			else
			{
				dim = 28;
			}
		}
		else
		{
			dim = 30;
		}
		// module caculation day in month end
		// module caculation calender tomorrow start
		if (d < dim)
		{
			d = d + 1;
		}
		else if (d == dim && m != 12)
		{
			d = 1;
			m = m + 1;
		}
		else if (d == dim && m == 12)
		{
			d = 1;
			m = 1;
			y = y + 1;
		}
		else
			printf("invalid day not day in month\n");
		// module caculation calender tomorrow end
	} while (d > dim);
	printf("Tomorrow is %d / %d / %d \n", d, m, y);
	getch();
}
