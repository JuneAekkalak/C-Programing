#include "stdio.h"
int main() {
	int n = 0;
	int code[n];
	int creditT[n] ,creditP[n];
	int i;
	int sumPrice[n];
	int sumcredit[n];
	
	printf("input Number of students is ");
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++){
		printf("input Student code is ");
		scanf("%d",&code[i]);
		printf("input creditT");
		scanf("%d",&creditT[i]);
		printf("input creditP");
		scanf("%d",&creditP[i]);
		sumcredit[n] = creditT[i] + creditP[i]; 
	}
	if(sumcredit[n]<10&&sumcredit[n] > 21){
		for( i = 0 ; i < n ; i++){
		printf("input Student code is ");
		scanf("%d",&code[i]);
		printf("input creditT");
		scanf("%d",&creditT[i]);
		printf("input creditP");
		scanf("%d",&creditP[i]);
	}
}
	else
		for(i = 0 ; i < n; i++){
		printf("code is %d \n",code[i]);
		sumPrice[i] = (creditT[i] * 120 ) + (creditP[i] * 150 ) + 8000;
		printf("sumcredit is %d \n",sumcredit);
		printf("sumPrice is %d \n",sumPrice[i]);
	}
	
}
