#include "stdio.h"
#include "conio.h"
int main()
{
	int n = 12, i;
	float Rf[n], max, min, avg = 0, sum = 0;
	/*
	printf("input number Rainfall =  ")
	scanf("%d",&n);
	*/
	// loop input Rainfall start
	for (i = 0; i < n; i++)
	{
		printf("Input Rainfall[%d] = ", i);
		scanf("%f", &Rf[i]);
		while (Rf[i] < 0)
		{
			printf(" ** Warning Invalid Rainfall **\n");
			printf("Input new Rainfall[%d] = ", i);
			scanf("%f", &Rf[i]);
		}
		// Total rainfall
		sum = sum + Rf[i];
	}
	// loop input Rainfall end
	// loop min max start
	max = Rf[0];
	min = Rf[0];

	for (i = 0; i < n; i++)
	{
		if (Rf[i] >= max)
		{
			max = Rf[i];
		}
		if (Rf[i] <= min)
		{
			min = Rf[i];
		}
	}
	// loop min max end
	avg = sum / n;
	printf("max = %.2f \n", max);
	printf("min = %.2f \n", min);
	printf("sum = %.2f \n", sum);
	printf("avg = %.2f \n", avg);

	printf("Press any key to exit...");
	getch();
}
