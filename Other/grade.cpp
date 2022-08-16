#include "stdio.h"
int main(){
	
	char str ; 
	
	printf("input str :");
	scanf("%c",&str);
	
	if(str == 'A'||'a'){
		printf("80,100");
	}
	else if(str == 'B'||'b'){
		printf("70,80");
	}
	else if(str == 'C'||'c'){
		printf("60,70");
	}
	else if(str == 'D'||'d'){
		printf("50,60");
	}
	else if(str == 'F'||'f'){
		printf("0,50");
 	}
 	else
 		printf("Plese input A,B,C,D,F");
}
