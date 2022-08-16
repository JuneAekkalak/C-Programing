#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

typedef struct employee structemplo;
struct employee{
	char id[10];
	char name[20];
	char sername[20];
	int age;
	int salary;
	char department[30];
}employee;

FILE * fp ;
char filename[30];

void file_name(void){
	printf("==================================\n");
	printf("Input filename and location : ");
	gets(filename);
	printf("\n");
}

void inputemployee(){
	int a ; 
	fp = fopen(filename , " w ");
	if (filename == NULL){
		printf("error in writing file \n");
		exit(1);
	}
	printf("==================================\n");
	printf("WriteFile\n");
	printf("==================================\n");
	while (1){
		printf("Input information of employee \n");
		printf("Employee ID ( 0 = quit ) : ");
		scanf("%s",employee.id);
		a = atoi(employee.id);
		if( a == 0 ){
			break;
		}
		else {
			printf("Employee Name : ");
			scanf("%s",employee.name);
			printf("Employee Sername : ");
			scanf("%s",employee.sername);
			printf("Employee Age : ");
			scanf("%d",&employee.age);
			printf("Employee Salary : ");
			scanf("%d",&employee.salary);
			printf("Employee Department : ");
			scanf("%s",employee.department);	
			printf("\n");
			fwrite(&employee , sizeof(employee), 1 , fp);
		}
	}
	fclose(fp);
}
void printemployee(){
	fp = fopen(filename , " r ");
	if (filename == NULL){
		printf("error in reading file \n");
		exit(1);
	}
	printf("\n==================================\n");
	printf("ReadFile\n");
	printf("==================================\n");
	while (fread(&employee , sizeof(employee), 1 , fp) == 1){
		printf("information of employee \n");
		printf("Employee ID : %s \n",employee.id);
		printf("Employee FirstName : %s \n",employee.name);
		printf("Employee Sername : %s \n",employee.sername);
		printf("Employee Age : %d \n",employee.age);
		printf("Employee Salary : %d \n",employee.salary);	
		printf("Employee Department : %s \n",employee.department);
		printf("\n");
	}
	fclose(fp);
}

int main(){
	file_name();
	inputemployee();
	printemployee();
	getch();
}


