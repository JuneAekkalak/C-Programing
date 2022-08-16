#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

typedef struct employee employeetype;
struct employee {
	char em_id[10];
	char name[15];
	char sername[15];
	int age ;
	int salary;
	char department[30];
};
int main(){
	char namefile2[50];
	employeetype employee;
	FILE * fp2 ;
	printf("Open file name and location : ");
	gets(namefile2);
	if((fp2 = fopen(namefile2 ,"r"))== NULL){
		printf("Error in read file \n");
		exit(1);
	}
	while ( fread(&employee , sizeof(employee), 1 , fp2) == 1){
		printf("Input information of employee \n");
		printf("Employee ID : %s ",employee.em_id);
		printf("Employee Name : %s ",employee.name);
		printf("Employee Sername : %s ",employee.sername);
		printf("Employee Age : %d",employee.age);
		printf("Employee Salary : %d ",employee.salary);
	}	
}

