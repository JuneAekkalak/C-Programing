#include "stdio.h"
#include "conio.h"
int main (){
	int n ,s ;
	printf("value is : ");
	scanf("%d",&n);
	if(n<1){
		printf("Can't be literal");
	}
	else if(n > 0 && n < 27){
		n = n + 96;
		printf("%c",n);
	}
	else {
		n = n % 10; 
		s = n + 96;
		printf("%c",s);
	}
	getch();
}
