#include "stdio.h"
#include "conio.h"
int main(){
	int n = 3 ;
	char name[30];
	float std_score[n];
	int min ,max;
	int i ;
	for (i=0;i<n;i++ )
	{
		printf("Enter std score[%d] :",i+1);
		scanf("%d",&std_score[i]);
	}
	/*
	printf("std_score [%d] [%d] [%d]",std_score[0],std_score[1],std_score[2]);
	*/
	
	min = std_score[0];
	max = std_score[0];
	int indexmax = 0;
	int indexmin = 0;
	float avg = 0;
	int sum = 0;
	for (i=0;i<n;i++){
		if(std_score[i] > max)
		{
			max = std_score[i];
			indexmax = i ;
		}
		if(std_score[i] < min)
		{
			min = std_score[i];
			indexmin = i ;
		}
		else 
			sum = sum + std_score[i];
			avg = (sum / n);
	}

	printf("max is : %d at stdent %d \n",max,indexmax+1);
	printf("min is : %d at stdent %d\n",min,indexmin+1);
	printf("sum is %d ",sum);
	printf("avg is %f ",avg);
	return 0;
	
}
