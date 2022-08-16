#include "stdio.h"
#include "conio.h"

void inputarray(int size);
void evennumbers(int a[], int size);
void Outputevennumbers(int a[], int size, int j);
void oddnumbers(int a[], int size);
void Outputoddnumbers(int a[], int size, int j);

int main()
{
	int n, i, array[n];
	printf("=======================================\n");
	printf("* Programe find even and odd in array *\n");
	printf("=======================================\n");
	do
	{
		printf("Input size of array : ");
		scanf("%d", &n);
	} while (n < 1);
	printf("=======================================\n");
	inputarray(n);
	getch();
}
void Outputoddnumbers(int a[], int b[], int j)
{
	int i;
	printf("<<<<<<== Oddnumber ==>>>>>> \n");
	for (i = 0; i < j; i++)
	{
		printf("odd is %d \n", a[i]);
		printf("oddposition is %d \n", b[i]);
	}
	printf("Total oddnumber ==> %d \n",j);
}
void Outputevennumbers(int a[], int b[], int j)
{
	int i;
	printf("<<<<<<== Evennumber ==>>>>>> \n");
	for (i = 0; i < j; i++)
	{
		printf("even is %d \n", a[i]);
		printf("evenposition is %d \n", b[i]);
	}
	printf("Total evennumber ==> %d \n\n",j);
}
void oddnumbers(int a[], int size)
{
	int i, j;
	j = 0;
	int odd[size], oddposition[size];
	for (i = 0; i < size; i++)
	{
		if (a[i] % 2 != 0)
		{
			odd[j] = a[i];
			oddposition[j] = i;
			j = j + 1;
		}
	}
	Outputoddnumbers(odd, oddposition, j);
}
void evennumbers(int a[], int size)
{
	int i, j;
	j = 0;
	int even[size], evenposition[size];
	for (i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			even[j] = a[i];
			evenposition[j] = i;
			j = j + 1;
		}
	}
	Outputevennumbers(even, evenposition, j);
}
void inputarray(int size)
{
	int n = size;
	int i, array[n];
	for (i = 0; i < n; i++)
	{
		printf("Input element of array at [%d]: ", i);
		scanf("%d", &array[i]);
	}
	printf("\n\n");
	evennumbers(array, n);
	oddnumbers(array, n);
}
