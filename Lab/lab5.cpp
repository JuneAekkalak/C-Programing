#include "stdio.h"
#include "conio.h"
#include "string.h"
int main(){
	int n,i;
	float score[n],min , max ,avg=0,sum=0;
	char name[30],maxname[30], minname[30];
	
	printf("input number student is ");
	scanf("%d",&n);
	for(i = 0; i < n;i++){
		printf("Input name is ");
		scanf("%s",name);
		printf("Input scoer[%d] =  ",i);
		scanf("%f",&score[i]);
		while (score[i] < 0 || score[i] > 100){
			printf("Input name is ");
			scanf("%s",name);
			printf("Input scoer[%d] =  ",i);
			scanf("%f",&score[i]);
		}
		sum = sum + score[i];
		min = score[0];
		max = score[0];
		for (i=0;i<n;i++){
			if(score[i] > max)
			{
				strcpy(maxname,name);
				max = score[i] ;
			}
			if(score[i] < min)
			{
				strcpy(minname,name);
				min = score[i] ;
			}
		}
	}
	avg = sum / n;
	printf("max is : %.2f at student name is %s \n",max,maxname);
	printf("min is : %.2f at student name is %s \n",min,minname);
	printf("sum is %.2f ",sum);
	printf("avg is %.2f ",avg);
	
	
	
}
