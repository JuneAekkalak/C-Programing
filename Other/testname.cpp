#include "stdio.h"
#include "conio.h"
int main(){
	char name[5][2];
	int n,i,j;
	float score[n],min , max ,avg=0,sum=0;
	
	printf("input number student ");
	scanf("%d",&n);
	for(i = 0; i < n ; i++ ){
		for (j = 0; j < n;j++){
			printf("input data[%d][%d] ",i,j);
			scanf("%s",name[i][j]);
		}
	}
	/*
	for(i = 0; i < n;i++){
		printf("Input name is ");
		scanf("%s",name);
		printf("Input scoer[%d] =  ",i);
		scanf("%f",&score[i]);
		
	}

	min = score[0];
	max = score[0];
	avg = sum / n;
	for (i=0;i<n;i++){
		if(score[i] > max)
		{
			max = score[i];
			
		}
		if(score[i] < min)
		{
			min = score[i];
			
		}
		else
			sum = sum + score[i];
	}

	printf("max is : %.2f  \n",max);
	printf("min is : %.2f  \n",min);
	printf("sum is %.2f ",sum);
	printf("avg is %.2f ",avg);
	*/
	
	
	
}
