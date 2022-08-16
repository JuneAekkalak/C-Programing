#include "stdio.h"
#include "conio.h"
int sumdigit(int n);
int main(){
	int n,result ; 
	printf("Enter your integer is : ");
	scanf("%d",&n);
	result = sumdigit(n);
	printf("output is %d \n",result);
	
}
int sumdigit(int n){
	int digit , sum; 
	while (n != 0){
		digit = n % 10 ;
		n = n / 10 ;
		sum = sum + digit; 
	}
	return(sum);
}
