#include "stdio.h"
int main() {
	int n ,i;
	int code , credit1 , credit2 ;
	int sumcredit;
	printf("input n ");
	scanf("%d",&n);
	
	for (i = 1 ; i <= n ; i ++)
	{
		do{
		
			printf("input code ");
			scanf("%d",&code);
			printf("input credit1 ");
			scanf("%d",&credit1);
			printf("input credit2 ");
			scanf("%d",&credit2);
			sumcredit = credit1 + credit2 ;
		}while(sumcredit > 21 || sumcredit < 10);
		int sumprice = (credit1 * 120) + (credit2 * 150) +8000;
		printf(" code is %d \n",code);
		printf(" sumprice is %d \n",sumprice);
	} 	
	
	
}
