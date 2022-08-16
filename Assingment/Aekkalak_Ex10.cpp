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
	char namefile[50],namefile2[50],age[2],salary[10],emid[10];
	int a; 
	employeetype employee;
	FILE * fp ; 
	printf("Create file name and location : ");
	gets(namefile);
	if((fp = fopen(namefile ,"w"))== NULL){
		printf("Error in writing file \n");
		exit(1);
	}
	do{
		printf("Input information of employee \n");
		printf("Employee ID : ");
		scanf("%d",&a);
		(employee.em_id[10] = emid[10] = (emid[10] = char (a)));
		
		if (a != 0 ){
			
			printf("Employee Name : ");
			gets(employee.name);
			
			printf("Employee Sername : ");
			gets(employee.sername);
			
			printf("Employee Age : ");
			gets(age);
			employee.age = int (age[2]);
			
			printf("Employee Salary : ");
			gets(salary);
			employee.salary = int (salary[10]);
			
			fwrite(&employee , sizeof(employee), 1 , fp);
		}
	}while (a != 0  );
	fclose(fp);
}
