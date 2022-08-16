#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

typedef struct name * stctype;
struct name {
	float number ;
	int expo;
	stctype next ;
};

int main(){
	stctype frist = NULL , temp ;
	float x ;
	int y ;
	while(1){
		printf("Enter value coefficient : ");
		scanf("%f",&x);
		printf("Enter value Exponent : ");
		scanf("%d",&y);
		temp = (stctype)malloc(sizeof(name));
		temp -> number = x ;
		temp -> expo = y ;
		temp -> next = frist;
		frist = temp ;
		if(y == 0){
			break;
		}
	}
	temp = frist ;
	while(temp != NULL){
		printf("%.1f|%d \n",temp ->number , temp -> expo);
		temp = temp -> next;
	}
	getch();
}
