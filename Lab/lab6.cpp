#include "stdio.h"
#include "conio.h"
int main(){
	int n,i,a,sum = 0; 
	int ar[n],sumN[n];
	do {
		printf("Input number of size array :");
		scanf("%d",&n);
	}while( n < 1);
	while (i < n){
		printf("Input number : ");
		scanf("%d",&ar[i]);
		while (ar[i] < 1 ){
			printf("Input number : ");
			scanf("%d",&ar[i]);
		}
		i = i + 1;
	}
	int j = 0;
	for(i = 0 ; i < n ; i++){
		if(ar[i] % 2 == 0){
			sum = sum + 1;
			sumN[j] = ar[i];
			j = j + 1 ;
		}
	}
	for (i = 0 ; i < n ; i++){
		printf("ar[%d] = %d \n",i,ar[i]);
	}
	for ( i = 0 ; i < sum; i++){
		printf("sumN[%d] = %d \n",i,sumN[i]);
	}
	printf("Sum Positive integers = %d",sum);
	getch();
}
