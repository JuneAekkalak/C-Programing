#include "stdio.h"

int main(){
	int a ; 
	
	printf("input value is : ");
	scanf("%d",&a);
	
	if (a > 0){
		printf("%d > 0",a);
	}
	else if ( a < 0){
		printf("%d < 0",a);
	}
	else 
		printf("%d = 0",a);
}
