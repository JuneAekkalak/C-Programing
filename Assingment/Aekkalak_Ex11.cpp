#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
typedef struct employee structemplo;
struct employee{
	char id[10];
	char name[20];
	char sername[20];
	int age;
	int salary;
	char department[30];
}employee;

FILE * fp , * fp2 ; 

void readfile(char filename[] , char filename2[]){
	if ((fp = fopen(filename,"r")) == NULL){
		printf("error in reading file \n");
		exit(1);
	}
	fp2 = fopen(filename2,"w");
	while(fread(&employee , sizeof(employee), 1 , fp)== 1){
		employee.salary = employee.salary + (employee.salary * 0.05);
		fwrite(&employee , sizeof(employee), 1 , fp2);	
		if(ferror(fp)){
			printf("Error reading file ");
			exit(1);
		}
	}
	fclose(fp2);
	fclose(fp);
}

void print_file(char filename[]){
	int i = 0;
	fp = fopen(filename , " r ");
	if (filename == NULL){
		printf("error in reading file \n");
		exit(1);
	}
	while (fread(&employee , sizeof(employee), 1 , fp) == 1){
		printf("information of employee from [%s] No.[%d]\n",filename,i+1);
		printf("Employee ID : %s \n",employee.id);
		printf("Employee FirstName : %s \n",employee.name);
		printf("Employee Sername : %s \n",employee.sername);
		printf("Employee Age : %d \n",employee.age);
		printf("Employee Salary : %d \n",employee.salary);	
		printf("Employee Department : %s \n",employee.department);
		printf("\n");
		i++;
	}
	fclose(fp);
}

int main(){
	char filename[30] , filename2[30];
	printf("File name for read : ");
	gets(filename);
	printf("File name for write : ");
	gets(filename2);
	readfile(filename , filename2);
	printf("\t\tINFO EMPLOYEE\n");
	print_file(filename);
	print_file(filename2);
	getch();
}
