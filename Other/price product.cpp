#include "stdio.h"
int main(){
	int num, price ,sumprice ,money ,change, i;

	printf("input number product is : ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Input product price :");
		scanf("%d",&price);
		sumprice = sumprice + price; 
	}
	printf("sumprice is %d \n",sumprice); 
	do{
		printf("input money user is : ");
		scanf("%d",&money);
			if ( money < sumprice){
					printf("your money less than price of product\n");				
			}
	}while (money < sumprice);
			if(money >= sumprice) {
					change = money - sumprice ;
			}
	printf("your change is %d",change);
	
}


