#include "stdio.h"
float rate_vat(int money);
float vat(int money,float ratevat);


int main(){
	int money = 0 ; 
	float ratevat,summoney;
	printf("enter money => ");
	scanf("%d",&money);
	ratevat = rate_vat(money);
	summoney = vat(money , ratevat);
	printf("tax = %.2f \n",ratevat);
	printf("Net income is %.2f",summoney);
}
float vat(int money,float ratevat){
	money = money - ratevat ; 
	return(money);
}
float rate_vat(int money){
	float ratevat = 0 ;
	if (money >= 100000){
		ratevat = money * 0.15;
	}
	else if ( money >= 30000){
		ratevat = money * 0.10;
	}
	else if ( money >= 10000 ){
		ratevat = money * 0.05 ;
	}
	else 
		ratevat = 0 ; 
	return(ratevat);
}















