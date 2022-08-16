#include "stdio.h"
#include "conio.h"

int inputarray(int n){
	int  number , i;
	for(i = 0 ; i < n ; i++ ){
		printf("Input number :");
		scanf("%d",&number);
		return(number);
	}
	
}
int evennumber(int * number){
	int i= 0 ;
	if(* number % 2 == 0){
		return(* number);
	}

}
int oddnumber(int * number){
	int i = 0 ;
	if(* number % 2 != 0){
		return(* number);
	}
}


int main(){
	int i=0 ,j = 0 ,  a ;
	int intarray[n] , even[30] , odd[30] ;
	printf("Input size of array : ");
	scanf("%d",&n);
	while(i < n){
		a = inputarray(n);
		intarray[i] = a ;
		even[j] = evennumber(a);
		odd[j] = oddnumber(a);
		i = i + 1;
		j = j + 1;
	}
/*	while(i<n){
	
		j = j + 1;
	} */
	
	for(i = 0 ; i< n ; i++){
		printf("%d",intarray[i]);	
	}
	for(i = 0 ; i < n ; i++){
		printf("even is %d",evennumber[i]);
	}
	for(i = 0 ; i< n; i++){
		printf("odd is %d",oddnumber[i]);
	}
	



















}
