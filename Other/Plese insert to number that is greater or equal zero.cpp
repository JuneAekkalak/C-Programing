#include "stdio.h"
int main(){
	float x;
	
	printf("input value : ");
	scanf("%f",&x);
	
	if(x>=50){
		printf("Pass");
	}
	else if (x<0){
		printf("Plese insert to number that is greater or equal zero ");
	}
	else
		printf("Fail");
}
