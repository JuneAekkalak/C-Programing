#include "stdio.h"
int main(){
	int x,y,c;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	c=x;
	x=y;
	y=c;
	printf("x = %d , y = %d ",x,y);
}
